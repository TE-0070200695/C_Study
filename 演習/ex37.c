#include<stdio.h>

void print_int_dim(const int *,const int *);

int main(void){
    int d[] = {10,20,30,40,50};
    int n;

    n = sizeof d / sizeof d[0];/*�S�o�C�g�� / 1�v�f�̃o�C�g��*/
    printf("&d[0] = %p sizeofd = %d �v�f = %d\n",&d[0],sizeof d,n);
    printf("�I���Ԓn�́Ad + n = %p &d[n] = %p\n",d + n,&d[n]);

    print_int_dim(d,&d[n]);
    return 0;
}

void print_int_dim(const int *start,const int *end){
    printf("start = %p end = %p �v�f����%d\n",start,end,end - start);
    while(start<end){
        printf("%p -> %d\n",start,*start);
        start++;
    }
}