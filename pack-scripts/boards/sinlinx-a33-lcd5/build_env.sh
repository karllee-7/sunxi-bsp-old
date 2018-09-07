#export BOARD_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
export J=$(expr `grep ^processor /proc/cpuinfo  | wc -l` \* 2)

export ARCH=arm
export MACH=sun8iw5p1
export PLATFORM=linux

export UBOOT_DIR=$TOP_DIR/u-boot-sunxi
export UBOOT_CONFIG=sun8iw5p1_config
export UBOOT_CROSS_COMPILE=arm-linux-gnueabi-

export KERNEL_DIR=$TOP_DIR/linux-sunxi
export KERNEL_CONFIG=sun8iw5p1smp_bpi_defconfig
export KERNEL_CROSS_COMPILE=arm-openwrt-linux-muslgnueabi-

export STAGING_DIR=$TOOLCHAIN_BASE/arm-openwrt-linux-muslgnueabi-gcc-5.2.0
export PATH=$TOOLCHAIN_BASE/arm-openwrt-linux-muslgnueabi-gcc-5.2.0/bin:$PATH
export PATH=$TOOLCHAIN_BASE/arm-linux-gnueabi-gcc-4.6.3/bin:$PATH
export PATH=$BOARD_DIR/pctools/mod_update:$PATH
export PATH=$BOARD_DIR/pctools/eDragonEx:$PATH
export PATH=$BOARD_DIR/pctools/fsbuild200:$PATH
export PATH=$BOARD_DIR/pctools/android:$PATH
#=========================================================================
export MALI_DRV_ROOT=$KERNEL_DIR/modules/gpu/mali400/kernel_mode/driver/src/devicedrv/mali
export MALI_UMP_ROOT=$KERNEL_DIR/modules/gpu/mali400/kernel_mode/driver/src/devicedrv/ump
export MALI_OUTPUT_DIR=$KERNEL_DIR/output/lib/modules/3.4.39-BPI-M2M-Kernel/kernel/drivers/gpu

build_gpu()
{
	echo -e "\033[33minfo start build gpu...\033[0m"
	make -C ${MALI_UMP_ROOT} CONFIG=ca8-virtex820-m400-1 BUILD=release KDIR=${KERNEL_DIR} \
		ARCH=$ARCH CROSS_COMPILE=$KERNEL_CROSS_COMPILE
	make -C ${MALI_DRV_ROOT} USING_UMP=0 BUILD=release \
		ARCH=$ARCH KDIR=${KERNEL_DIR} CROSS_COMPILE=$KERNEL_CROSS_COMPILE
	[ ! -d "$KERNEL_DIR/$MALI_OUTPUT_DIR" ] && mkdir -p $KERNEL_DIR/$MALI_OUTPUT_DIR
	cp -v $MALI_UMP_ROOT/ump.ko $KERNEL_DIR/$MALI_OUTPUT_DIR
	cp -v $MALI_DRV_ROOT/mali.ko $KERNEL_DIR/$MALI_OUTPUT_DIR
	echo -e "\033[33minfo build gpu end\033[0m"
}
clean_gpu()
{
	echo -e "\033[33minfo start clean gpu...\033[0m"
	make -C ${MALI_UMP_ROOT} CONFIG=ca8-virtex820-m400-1 BUILD=release \
		KDIR=${KERNEL_DIR} ARCH=$ARCH CROSS_COMPILE=$KERNEL_CROSS_COMPILE clean
	make -C ${MALI_DRV_ROOT} USING_UMP=1 BUILD=release \
		KDIR=${KERNEL_DIR} ARCH=$ARCH CROSS_COMPILE=$KERNEL_CROSS_COMPILE clean
	echo -e "\033[33minfo clean gpu end\033[0m"
}
#=========================================================================
build_uboot()
{
        echo -e "\033[33minfo: start build uboot...\033[0m"
        if [ ! -d "$UBOOT_DIR" ]; then
                echo -e "\033[31merror: uboot dir $UBOOT_DIR not exist.\033[0m"
                exit -1
        fi
        make -C $UBOOT_DIR ARCH=$ARCH CROSS_COMPILE=$UBOOT_CROSS_COMPILE ${UBOOT_CONFIG} -j$J
        make -C $UBOOT_DIR ARCH=$ARCH CROSS_COMPILE=$UBOOT_CROSS_COMPILE all -j$J
        echo -e "\033[33minfo: build kernel end \033[0m"
}
clean_uboot()
{
        echo -e "\033[33minfo: start clean uboot...\033[0m"
        if [ ! -d "$UBOOT_DIR" ]; then
                echo -e "\033[31merror: uboot dir $UBOOT_DIR not exist.\033[0m"
                exit -1
        fi
        make -C $UBOOT_DIR ARCH=$ARCH CROSS_COMPILE=$UBOOT_CROSS_COMPILE -j$J distclean
        echo -e "\033[33minfo: clean clean end\033[0m"
}
build_kernel()
{
        echo -e "\033[33minfo: start build kernel...\033[0m"
        if [ ! -d "$KERNEL_DIR" ]; then
                echo -e "\033[31merror: kernel dir $KERNEL_DIR not exist.\033[0m"
                exit -1
        fi
	if [ ! -f "$KERNEL_DIR/.config" ]; then
		echo -e "\033[33mwarning: .config dos not exist, copy $KERNEL_CONFIG to .config\033[0m"
        	make -C $KERNEL_DIR ARCH=$ARCH CROSS_COMPILE=$KERNEL_CROSS_COMPILE $KERNEL_CONFIG
	fi
        make -C $KERNEL_DIR ARCH=$ARCH CROSS_COMPILE=$KERNEL_CROSS_COMPILE -j$J INSTALL_MOD_PATH=output uImage
        make -C $KERNEL_DIR ARCH=$ARCH CROSS_COMPILE=$KERNEL_CROSS_COMPILE -j$J INSTALL_MOD_PATH=output modules
        make -C $KERNEL_DIR ARCH=$ARCH CROSS_COMPILE=$KERNEL_CROSS_COMPILE -j$J INSTALL_MOD_PATH=output modules_install
	build_gpu

        echo -e "\033[33minfo: build kernel end\033[0m"
}
config_kernel()
{
	if [ ! -d "$KERNEL_DIR" ]; then
                echo -e "\033[31merror: kernel dir $KERNEL_DIR not exist.\033[0m"
                exit -1
        fi
	if [ ! -f "$KERNEL_DIR/.config" ]; then
		echo -e "\033[33mwarning: .config dos not exist, copy $KERNEL_CONFIG to .config\033[0m"
		make -C $KERNEL_DIR ARCH=$ARCH CROSS_COMPILE=$KERNEL_CROSS_COMPILE $KERNEL_CONFIG
        fi
	make -C $KERNEL_DIR ARCH=$ARCH CROSS_COMPILE=$KERNEL_CROSS_COMPILE menuconfig
}
clean_kernel()
{
        echo -e "\033[33minfo: start clean kernel...\033[0m"
        if [ ! -d "$KERNEL_DIR" ]; then
                echo -e "\033[31merror: kernel dir $KERNEL_DIR not exist.\033[0m"
                exit -1
        fi
	clean_gpu
        make -C $KERNEL_DIR ARCH=$ARCH CROSS_COMPILE=$KERNEL_CROSS_COMPILE -j$J distclean
        rm -rf $KERNEL_DIR/output
        echo -e "\033[33minfo: clean kernel end\033[0m"
}
pack_image()
{

        echo -e "\033[33minfo: start pack image...\033[0m"
	[ -d "$OUT_DIR" ] && rm -rf "$OUT_DIR"
	mkdir -p "$OUT_DIR"
	#================================================================================
        cp -v $UBOOT_DIR/u-boot.bin $OUT_DIR/u-boot.fex
        #cp -v $KERNEL_DIR/arch/arm/boot/zImage $OUT_DIR
        #cp -v $KERNEL_DIR/arch/arm/boot/uImage $OUT_DIR/uImage.fex
        cp -v $KERNEL_DIR/arch/arm/boot/Image $OUT_DIR/bImage
        cp -v $KERNEL_DIR/drivers/arisc/binary/arisc $OUT_DIR/arisc.fex
        gzip -c $KERNEL_DIR/usr/initramfs_data.cpio > $OUT_DIR/rootfs.cpio.gz
        cp -v $BOARD_DIR/common/tools/* $OUT_DIR
        cp -v $BOARD_DIR/configs/image_linux.cfg $OUT_DIR/image.cfg
        cp -v $BOARD_DIR/configs/sys_partition_linux.fex $OUT_DIR/sys_partition.fex
        cp -v $BOARD_DIR/configs/sys_config.fex $OUT_DIR/sys_config.fex
        cp -v $BOARD_DIR/configs/env.cfg $OUT_DIR/env.cfg
        cp -v $BOARD_DIR/configs/boot0_nand_sun8iw5p1.bin $OUT_DIR/boot0_nand.fex
        cp -v $BOARD_DIR/configs/boot0_sdcard_sun8iw5p1.bin $OUT_DIR/boot0_sdcard.fex
        cp -v $BOARD_DIR/configs/fes1_sun8iw5p1.bin $OUT_DIR/fes1.fex
        cp -v $BOARD_DIR/configs/boot-resource.ini $OUT_DIR
        cp -rv $BOARD_DIR/configs/boot-resource $OUT_DIR
	#================================================================================
        cd $OUT_DIR
        mkbootimg \
		--kernel bImage \
		--ramdisk rootfs.cpio.gz \
		--board 'a33' \
		--base 0x40000000 \
		-o boot.fex

        unix2dos sys_config.fex
        unix2dos sys_partition.fex
        script sys_config.fex
        script sys_partition.fex
        cp -v sys_config.bin config.fex
        update_boot0 boot0_nand.fex sys_config.bin NAND
        update_boot0 boot0_sdcard.fex sys_config.bin SDMMC_CARD
        update_uboot u-boot.fex sys_config.bin
        update_fes1 fes1.fex sys_config.bin
        update_mbr sys_partition.bin 4
        fsbuild boot-resource.ini split_xxxx.fex
        u_boot_env_gen env.cfg env.fex
	#================================================================================
	#set -x
	[ ! -d rootfs_tmp ] && mkdir rootfs_tmp
	ROOTFS_SIZE=`du -ms $BOARD_DIR/rootfs | awk '{print $1}'`
	MODULES_SIZE=`du -ms $KERNEL_DIR/output | awk '{print $1}'`
	ROOTFS_SIZE_NEW=$((($ROOTFS_SIZE+$MODULES_SIZE+128)/16*16))
	echo -e "\033[33mrootfs size is ${ROOTFS_SIZE}M \033[0m"
	echo -e "\033[33mmodules size is ${MODULES_SIZE}M \033[0m"
	echo -e "\033[33mrootfs new size is ${ROOTFS_SIZE_NEW}M \033[0m"
	dd if=/dev/zero of=rootfs.fex bs=1M count=$ROOTFS_SIZE_NEW
	lodev=`sudo losetup -f --show rootfs.fex`
	sudo mkfs.ext4 -O ^metadata_csum,^64bit $lodev
	sudo mount $lodev rootfs_tmp
	sudo cp -a $BOARD_DIR/rootfs/* rootfs_tmp/
	[ ! -d rootfs_tmp/lib/modules ] && mkdir -p rootfs_tmp/lib/modules
	find $KERNEL_DIR/output -name "*.ko" -print0 | xargs -If1 -0 sudo cp f1 rootfs_tmp/lib/modules
	sudo mknod rootfs_tmp/dev/console c 5 1
	sudo mknod rootfs_tmp/dev/null c 1 3
	#sudo cp -a $KERNEL_DIR/output/* rootfs_tmp/
	sudo umount $lodev
	sudo losetup -d $lodev
	rm -r rootfs_tmp
	#set +x
	#================================================================================
	sed -i 's/^imagename/;imagename/g' image.cfg
	image_name="${BOARD}-`date "+%Y%m%d%H%M%S"`.img"
	echo "imagename=$image_name" >> image.cfg
	echo "" >> image.cfg
	#================================================================================
        dragon image.cfg sys_partition.fex
        echo -e "\033[32m`pwd`/$image_name\033[0m"
        cd $TOP_DIR
        echo -e "\033[33minfo: pack image end\033[0m"
}

clean_all()
{
	clean_uboot
	clean_kernel
	[ -d "$OUT_DIR" ] && rm -rfv "$OUT_DIR"

}
#=========================================================================
