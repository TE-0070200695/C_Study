#include<stdio.h>

int input_int_dim(int []);
void print_int_dim(const int [],int);
int sum_all_int_dim(const int [],int);
int maximum_value_search_int_dim(const int [],int);

int main(void){
    int Idata[100],n,i,sum,max;

    printf("入力データ数は100個までです。\n");
    n = input_int_dim(Idata);
    printf("データ件数%d\n",n);
    print_int_dim(Idata,n);
    /*
    for(i=0;i<n;i++){
        printf("data[%d] = %d\n",i,Idata[i]);
    }
    */
    sum = 0;
    /*
    for(i=0;i<n;i++){
        sum+=data[i];
    }
    */
   if(n){
        sum = sum_all_int_dim(Idata,n);
        printf("合計値は、%dです。\n",sum);
        /*
        max = data[0];
        for(i=1;i<n;i++){
            if(max < data[i]){
                max = data[i];
            }
        }
        */
        max = maximum_value_search_int_dim(Idata,n);
        printf("最大値は、%dです。\n",max);
    }
    return 0;
}

int input_int_dim(int data[]){
    int n=0;
    printf("%p番地に入力：",&data[n]);
    while(scanf("%d",&data[n])==1){
        n++;
        printf("%p番地に入力：",&data[n]);
    }
    return n;
}

void print_int_dim(const int data[],int n){
    for(int i=0;i<n;i++){
        printf("data[%d] = %d\n",i,data[i]);
    }
}

int sum_all_int_dim(const int data[],int n){
    int result = 0;
    for(int i=0;i<n;i++){
        result+=data[i];
    }
    return result;
}

int maximum_value_search_int_dim(const int data[],int n){
    int max = data[0];
    for(int i=1;i>n;i++){
        if(max< data[i]){
            max = data[i];
        }
    }
    return max;
}