//
// Created by boil on 18-7-30.
//

#ifndef _JEMALLOC_DEFINE_H
#define _JEMALLOC_DEFINE_H

#include <jemalloc/jemalloc.h>

#define zmalloc(size) je_malloc(size)
#define zcalloc(count,size) je_calloc(count,size)
#define zrealloc(ptr,size) je_realloc(ptr,size)
#define zfree(ptr) je_free(ptr)
#define zmallocx(size,flags) je_mallocx(size,flags)
#define zdallocx(ptr,flags) je_dallocx(ptr,flags)

#endif //_JEMALLOC_DEFINE_H
