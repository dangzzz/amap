#ifndef AMAP_INTERNAL_H
#define	AMAP_INTERNAL_H


#  include <sys/param.h>
#  include <sys/mman.h>
#  include <sys/syscall.h>
#include <sys/uio.h>
#include <pthread.h>
#include <errno.h>
#include <sys/types.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <inttypes.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

#include "amap/internal/skiplist_guard.h"

#include "amap/amap.h"

/******************************************************************************/
#define	AMAP_H_TYPES

#include "amap/internal/partition.h"


#undef AMAP_H_TYPES
/******************************************************************************/
#define AMAP_H_STRUCTS

#include "amap/internal/partition.h"


#undef AMAP_H_STRUCTS 
/******************************************************************************/
#define AMAP_H_EXTERNS

#include "amap/internal/partition.h"


#undef  AMAP_H_EXTERNS 
/******************************************************************************/
#define AMAP_H_INLINES

#include "amap/internal/partition.h"


#undef AMAP_H_INLINES 
/******************************************************************************/
#endif /* AMAP_INTERNAL_H */