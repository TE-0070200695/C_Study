#include<stdio.h>

/*intがたの関数の場合、プロトタイプを忘れてもエラーにはなりませんが、
忘れずにプロトタイプ宣言しましょう*/
int isurudoshi(int year);

int main(void){
    int year,y_n;

    y_n = 1;
    printf("プログラムの狩猟はCtrl+zです。\n");
    printf("西暦の年を入力：");
    while(scanf("%d",&year)==1){
        /*下記の行のコメントを外して実行できるように、isurudoshi関数を作成します*/
        y_n = isurudoshi(year);
        if(y_n){
            printf("%d年は閏年です\n",year);
        }else{
            printf("%d年は平年です\n",year);
        }
        printf("西暦の年を入力:");
    }
    return 0;
}

int isurudoshi(int year){
    /*s
    if(year%4){
        return 0;
    }else if(year%100){
        return 1;
    }else if(year%400){
        return 0;
    }else{
        return 1;
    }
    */
    return !(year%4)&&(year%100)||!(year%400);
}