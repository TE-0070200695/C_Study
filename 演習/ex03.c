#include<stdio.h>

int main(void){
    int f; /*�؎�(��F)�f�[�^�p�ϐ�*/
    double c; /*�ێ�(��C)�f�[�^�p�ϐ�*/

    printf("Enter��F�F");
    scanf("%d",&f);

    c = (double)(5 * (f - 32)) / 9;
    printf("%d��F -> %f��C\n",f,c);
    return 0;
}