#include<stdio.h>

int main(void){
    int m,d;

    printf("1〜12までの月を入力してください：");
    scanf("%d",&m);
    if(m>12 || 1 > m){
        printf("%dは月がありません！！\n",m);
        return -1;
    }
    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            d = 31;
            break;
        case 2:
            d = 28;
            break;
        default:
            d = 30;
            break;
    }
    printf("%d月は%d日あります！！\n",m,d);
    return 0;
}