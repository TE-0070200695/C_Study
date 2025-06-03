#include<stdio.h>
#include<math.h>

int power(int x,int y);

int main(void){
    int x,y;

    printf("プログラムの終了はCtrl+zです。\n");
    printf("整数を2データ入力:");
    while(scanf("%d %d",&x,&y)==2){
        printf("pow(%d,%d) = %d\n",x,y,(int)pow(x,y));
        /*下記sのpower関数のプロトタイプ宣言と実体を作成します*/
        printf("power(%d,%d) = %d\n",x,y,power(x,y));
        printf("整数を２データ入力:");
    }
    return 0;
}

int power(int x,int y){
    int result = x;
    for(int i=1;i<y;i++){
        result*=x;
    }
    return result;
}