/******************************************************************************/
#ifdef AMAP_H_TYPES
#define P_VALUE slt_skiplist
#define P_KEY intptr_t
void * startaddr;
void * endaddr;
size_t interval;
int nentry;
typedef struct pentry_s pentry_t;

extern pentry_t *ptable;

#endif /* AMAP_H_TYPES */
/******************************************************************************/
#ifdef AMAP_H_STRUCTS

struct pentry_s{
    P_VALUE value;
};

#endif /* AMAP_H_STRUCTS */
/******************************************************************************/
#ifdef AMAP_H_EXTERNS

P_VALUE *partition(P_KEY key);

#endif /* AMAP_H_EXTERNS */
/******************************************************************************/
#ifdef AMAP_H_INLINES

static inline void
partition_init(void *start,void *end,size_t inter)
{   
    startaddr = start;
    endaddr = end;
    interval = inter;
    nentry = ((intptr_t)end - (intptr_t)start)/interval+1;
    ptable = malloc(sizeof(pentry_t)*nentry);
}






#endif /* AMAP_H_INLINES */
/******************************************************************************/