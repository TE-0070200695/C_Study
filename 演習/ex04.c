#include<stdio.h>

int main(void){
    int x;

    printf("x=");
    scanf("%d",&x);
    if(x<0)
        printf("0以上の値を入力してください");
        return 1;
    if(x%2==1){
        printf("x = %d 奇数です\n",x);
    }else{
        printf("x = %d 偶数です\n",x);
    }
    return 0;
}