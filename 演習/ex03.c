#include<stdio.h>

int main(void){
    int f; /*Ψ(F)f[^pΟ*/
    double c; /*Ϋ(C)f[^pΟ*/

    printf("EnterFF");
    scanf("%d",&f);

    c = (double)(5 * (f - 32)) / 9;
    printf("%dF -> %fC\n",f,c);
    return 0;
}