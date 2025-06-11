#include<stdio.h>

int *input_int_dim(int *);
void print_int_dim(const int *,const int *);
int input_int(int *);

//添え字を使った関数
/*
void sort_int_dim(int [],int);
void swap_int(int [],int,int);
*/
//void sort_int_dim(int*,int);
void sort_int_dim(int*,int*);
void swap_int(int*,int*);

int main(void){
    int d[100],*end;

    end = input_int_dim(d);
    printf("並び変え前\n");
    print_int_dim(d,end);

    //sort_int_dim(d,end-d);
    sort_int_dim(d,end);

    printf("並び替え後\n");
    print_int_dim(d,end);
    return 0;
}

void sort_int_dim(int *pi,int *end){
    for(;pi < end -1;pi++){
        int *pj;
        for(pj=pi+1;pj<end;pj++){
            if(*pi > *pj){
                swap_int(pi,pj);
            }
        }
    }
}

/*
void sort_int_dim(int *d,int n){
    int i=0;
    int *p = d;

    while(i++ < n){
        p++;
        int j=0;
        while(j++ < n-i){
            if(*p<*d){
                printf("p:%d,d:%d ",*p,*d);
                swap_int(p,d);
            }
            p++;
            //printf("i:%d j:%d\n",i,j);
        }
        d++;
        p=d;
    }
}
*/
void swap_int(int *d,int *p){
    int w = *p;
    printf("w:%d\n",w);
    *p = *d;
    *d = w;
}
//添え字を使った変数の更新
/*
void sort_int_dim(int data[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(data[j]<data[i]){
                swap_int(data,i,j);
             }
        }
    }
}

void swap_int(int data[],int i,int j){
    int w=data[i];
    data[i]=data[j];
    data[j]=w;
}
*/

int input_int(int *data){
    printf("Enter %p:",data);
    return scanf("%d",data)==1;
}

int *input_int_dim(int *start)
{
    while(input_int(start))start++;
    return start;
}

void print_int_dim(const int *start,const int *end){
    while(start<end){
        printf("%p -> %d\n",start,*start);
        start++;
    }
}
