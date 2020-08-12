#define	AMAP_PARTITION_C_
#include "amap/internal/amap_internal.h"

/******************************************************************************/
/* Data. */

pentry_t *ptable;

/******************************************************************************/
/* Function prototypes for non-inline static functions. */


/******************************************************************************/
/* Inline tool function */


/******************************************************************************/

P_VALUE *
partition(P_KEY key){
    return &(ptable[(key-(intptr_t)startaddr)/interval].value);
}