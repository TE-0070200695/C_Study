#include<stdio.h>

int main(void){
    int x;

    printf("x=");
    scanf("%d",&x);
    if(x<0)
        printf("0�ȏ�̒l����͂��Ă�������");
        return 1;
    if(x%2==1){
        printf("x = %d ��ł�\n",x);
    }else{
        printf("x = %d �����ł�\n",x);
    }
    return 0;
}