#ifndef AMAP_H_
#define	AMAP_H_
#ifdef __cplusplus
extern "C" {
#endif


void amap_init(void *start,void *end,size_t interval);

void *amap_find(intptr_t key);

void amap_insert(intptr_t key,intptr_t val);


#ifdef __cplusplus
};
#endif
#endif /* LSMALLOC_H_ */