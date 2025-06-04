#include<stdio.h>

int input_int(int *);/*ステップ１：この関数を使う*/
void swap_int(int *,int *);/*ステップ２：この関数を作る*/

int main(void){
    int a,b,c,r1,r2,r3,w;

    r1 = input_int(&a);
    r2 = input_int(&b);
    r3 = input_int(&c);
    while(r1 && r2 && r3){
        printf("途中経過：%d %d %d\n",a,b,c);
        if(a > b){
            swap_int(&a,&b);
        }
        printf("途中経過：%d %d %d\n",a,b,c);
        if(a > c){
            swap_int(&a,&c);
        }
        printf("途中経過：%d %d %d\n",a,b,c);
        if(b > c){
            swap_int(&b,&c);
        }
        printf("途中経過：%d %d %d\n",a,b,c);
        if(a * a + b * b == c * c)printf("直角三角形です。\n");

        r1 = input_int(&a);
        r2 = input_int(&b);
        r3 = input_int(&c);
    }
    return 0;
}

int input_int(int *p){
    printf("整数：");
    return scanf("%d",p)==1;
}

void swap_int(int *p1,int *p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}