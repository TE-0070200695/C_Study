#include<stdio.h>

int input_int_dim(int []);
void print_int_dim(const int [],int);
int sum_all_int_dim(const int [],int);
int maximum_value_search_int_dim(const int [],int);
void sort_up_int_dim(int [],int);
void sort_down_int_dim(int [],int);
void swp_dim_data(int [],int,int [],int);

int main(void){
    int Idata[100],n,i,sum,max;

    printf("���̓f�[�^����100�܂łł��B\n");
    n = input_int_dim(Idata);
    printf("�f�[�^����%d\n",n);
    print_int_dim(Idata,n);
    sum = 0;

   if(n){
        sum = sum_all_int_dim(Idata,n);
        printf("���v�l�́A%d�ł��B\n",sum);
        max = maximum_value_search_int_dim(Idata,n);
        printf("�ő�l�́A%d�ł��B\n",max);
    }

    sort_up_int_dim(Idata,n);
    printf("�����̕��ѕς����ʂł��B\n");
    print_int_dim(Idata,n);/*����̍ė��p�̗ǂ���ł�*/
    
    sort_down_int_dim(Idata,n);
    printf("�~���̕��ѕς����ʂł��B\n");
    print_int_dim(Idata,n);/*����̍ė��p�̗ǂ���ł�*/
    return 0;
}

int input_int_dim(int data[]){
    int n=0;
    printf("%p�Ԓn�ɓ��́F",&data[n]);
    while(scanf("%d",&data[n])==1){
        n++;
        printf("%p�Ԓn�ɓ��́F",&data[n]);
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

void sort_up_int_dim(int data[],int n){
    int tmp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(data[i] > data[j]){
                swp_dim_data(data,i,data,j);
            }
        }
    }
}

void sort_down_int_dim(int data[],int n){
    int tmp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(data[i] > data[j]){
                swp_dim_data(data,i,data,j);
            }
        }
    }
}

void swp_dim_data(int data1[],int n1,int data2[],int n2){
    int tmp = data1[n1];
    data1[n1] = data2[n2];
    data2[n2]=tmp;
}