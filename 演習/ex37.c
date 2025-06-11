#include<stdio.h>

void print_int_dim(const int *,const int *);

int main(void){
    int d[] = {10,20,30,40,50};
    int n;

    n = sizeof d / sizeof d[0];/*全バイト数 / 1要素のバイト数*/
    printf("&d[0] = %p sizeofd = %d 要素 = %d\n",&d[0],sizeof d,n);
    printf("終了番地は、d + n = %p &d[n] = %p\n",d + n,&d[n]);

    print_int_dim(d,&d[n]);
    return 0;
}

void print_int_dim(const int *start,const int *end){
    printf("start = %p end = %p 要素数は%d\n",start,end,end - start);
    while(start<end){
        printf("%p -> %d\n",start,*start);
        start++;
    }
}