#include<stdio.h>

int *input_int_dim(int *);
int input_int(int *);
void print_int_dim(const int *,const int *);
int sum_int_dim(const int *,const int *);

int main(void){
    int d[100];
    int *end;

    end = input_int_dim(d);
    if(end > d)printf("合計値%d\n",sum_int_dim(d,end));
    else    printf("入力データなし\n");
    return 0;
}

int *input_int_dim(int *start){
    /*ここを作ってください*/
    while(input_int(start)){
        start++;
    }
    return start;
}

int input_int(int *p){
    printf("Enter %p : ",p);
    return scanf("%d",p)==1;
}

void print_int_dim(const int *start,const int *end){
    printf("start = %p end = %p 要素数は%d\n",start,end,end - start);
    while(start<end){
        printf("%p -> %d\n",start,*start);
        start++;
    }
}

int sum_int_dim(const int *d,const int *end){
    int result =0;
    while(d < end){
        result+=*d;
        d++;
    }
    return result;
}