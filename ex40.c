#include<stdio.h>

int *input_int_dim(int *);
int input_int(int *);
int *max_int_dim(const int *,const int *);
//int max_int_dim(const int *,const int *);

int main(void){
    int d[100],*end,n;

    end = input_int_dim(d);
    printf("�ő�l�� %d\n",*max_int_dim(d,end));/*���̊֐������܂�*/
    printf("�ő�l�̃|�C���^�[��%p\n",max_int_dim(d,end));
    return 0;
}

int *input_int_dim(int *start){
    while(input_int(start))start++;
    return start;
}

int input_int(int *data){
    printf("Enter %p:",data);
    return scanf("%d",data)==1;
}

int *max_int_dim(const int *start,const int *end){
    int *p=start++;
    while(start<end){
        if(*p <=*start){
            p = start;
            //printf("max:%d\n",*p);
        }
        start++;
    }
    return p;
}

//�ő�l��Ԃ�(�ϐ���Ԃ�)
/*
int max_int_dim(const int *start,const int *end){
    int max =*start;
    while(++start<end){
        if(max <= *start){
            max = *start;
            printf("max:%d\n",max);
        }
    }
    return max;
}
*/
