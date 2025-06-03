#include<stdio.h>

int main(void){
    int f; /*華氏(°F)データ用変数*/
    double c; /*摂氏(°C)データ用変数*/

    printf("Enter°F：");
    scanf("%d",&f);

    c = (double)(5 * (f - 32)) / 9;
    printf("%d°F -> %f°C\n",f,c);
    return 0;
}