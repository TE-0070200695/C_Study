#include<stdio.h>

int main(void){
    int x,y;

    printf("x y 入力：");
    scanf("%d %d",&x,&y);

    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d - %d = %d\n",x,y,x-y);
    printf("%d * %d = %d\n",x,y,x*y);
    /*入力データが、10と3であれば、0.33333の様に*/
    /*下記の１行の太字部分を変更して、小数点以下を%f書式表示できるように変更します。*/
    //printf("%d / %d = %d\n",x,y,x/y);
    printf("%d / %d = %f\n",x,y,(double)x/y);
    printf("%d %%  %d = %d\n",x,y,x%y);
}