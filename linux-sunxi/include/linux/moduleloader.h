/*
 * include/linux/moduleloader.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef _LINUX_MODULELOADER_H
#define _LINUX_MODULELOADER_H
/* The stuff needed for archs to support modules. */

#include <linux/module.h>
#include <linux/elf.h>

/* These may be implemented by architectures that need to hook into the
 * module loader code.  Architectures that don't need to do anything special
 * can just rely on the 'weak' default hooks defined in kernel/module.c.
 * Note, however, that at least one of apply_relocate or apply_relocate_add
 * must be implemented by each architecture.
 */

/* Adjust arch-specific sections.  Return 0 on success.  */
int module_frob_arch_sections(Elf_Ehdr *hdr,
			      Elf_Shdr *sechdrs,
			      char *secstrings,
			      struct module *mod);

/* Additional bytes needed by arch in front of individual sections */
unsigned int arch_mod_section_prepend(struct module *mod, unsigned int section);

/* Allocator used for allocating struct module, core sections and init
   sections.  Returns NULL on failure. */
void *module_alloc(unsigned long size);

/* Free memory returned from module_alloc. */
void module_free(struct module *mod, void *module_region);

/* Apply the given relocation to the (simplified) ELF.  Return -error
   or 0. */
int apply_relocate(Elf_Shdr *sechdrs,
		   const char *strtab,
		   unsigned int symindex,
		   unsigned int relsec,
		   struct module *mod);

/* Apply the given add relocation to the (simplified) ELF.  Return
   -error or 0 */
int apply_relocate_add(Elf_Shdr *sechdrs,
		       const char *strtab,
		       unsigned int symindex,
		       unsigned int relsec,
		       struct module *mod);

/* Any final processing of module before access.  Return -error or 0. */
int module_finalize(const Elf_Ehdr *hdr,
		    const Elf_Shdr *sechdrs,
		    struct module *mod);

/* Any cleanup needed when module leaves. */
void module_arch_cleanup(struct module *mod);

#endif