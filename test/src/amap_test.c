#include <time.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include "amap/amap.h"

void *addr[1000];
int res[1000];



int main(){
    srand((unsigned)time(NULL));
    for(int i =0;i<1000;i++){
        addr[i] = malloc(250);
    }
    amap_init((void *)((intptr_t)addr[1])-250*1500,(void *)((intptr_t)addr[1])+250*1500,25000);
    for(int i = 0;i<1000;i++){
        void *tmp = amap_insert(addr[i],addr[i]+1);
         printf("value address: %lld.  ",tmp);
    }
    
    for(int i = 0;i<100;i++){
        int x = rand()%1000;
        printf("key: %lld, value: %lld.  ",addr[x],amap_find(addr[x]));
    }
    
}