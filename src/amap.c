#define	AMAP_C_
#define SKIPLIST_IMPLEMENTATION
#include "amap/internal/amap_internal.h"

/******************************************************************************/
/* Data. */


/******************************************************************************/
/* Function prototypes for non-inline static functions. */


/******************************************************************************/
/* Inline tool function */


/******************************************************************************/

int cmp(intptr_t a, intptr_t b, void *userdata) {
     return a==b?0:(a<b?-1:1);
}

void 
amap_init(void *start,void *end,size_t interval)
{
    partition_init(start,end,interval);

    for(int i = 0;i<nentry;i++){
        slt_init(&ptable[i],cmp,NULL,NULL,NULL);
    }
}

void *
amap_find(intptr_t key)
{
    void *ret;
    slt_skiplist *sl= partition(key);
    slt_find(sl,key,&ret);
    return ret;
}

void 
amap_insert(intptr_t key,intptr_t val)
{   
    slt_skiplist *sl = partition(key);
    slt_insert(sl,key,val,NULL);
}