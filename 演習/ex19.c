#include<stdio.h>

int isurudoshi(int year);
int getdays(int year,int month);

int main(void){
    int year,month,days;

    printf("プログラムの終了はCtrl+zです。\n");
    printf("入力例 2000 2\n");
    printf("西暦の年月を入力：");
    while(scanf("%d %d",&year,&month)==2){
        if(1<=month && month<=12){
            days = getdays(year,month);
            printf("%d年%d月の日数は%d日です\n",year,month,days);
        }else{
            printf("入力エラー １～１２月以外は存在しません\n");
        }
        printf("西暦の年月を入力：");
    }
    return 0;
}

int isurudoshi(int year){
    return !(year % 4)&&(year%100)||!(year%400);
}

int getdays(int year,int month){
        switch(month){
            case 2:
                return 28 + !(isurudoshi(year));
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
                break;
            default:
                return 31;
                break;
        }
}