#include<stdio.h>

int main(void){
    int x;

    printf("x = ");
    scanf("%d",&x);

    if(x %2){
        printf("x = %d ��ł�\n",x);
    }else{
        printf("x = %d �����ł�\n",x);
        if(!(x&3)){
        //if(!(x%4)){
        //if(x%4==0){
            printf("4�̔{���ł�\n");
        }
    }
}