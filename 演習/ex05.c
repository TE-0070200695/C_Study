#include<stdio.h>

int main(void){
    int x,y;

    printf("x y 入力：");
    scanf("%d %d",&x,&y);

    /*入力データが、３と０であれば、ゼロ除算エラーでとまります*/
    /*y変数の入力値が、０であっても正常にプログラムが終了できるようにします。*/
    if(y){
         printf("%d %d = %d\n",x,y,x/y);
    }else{
        printf("0でわることはできません\n");
        
    }
    return 0;
}