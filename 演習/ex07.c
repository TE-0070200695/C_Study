#include<stdio.h>

int main(void){
    int h1,h2,h3;
    int left_Exp=0,right_Exp=0;
    printf("3�p�`�̊e�ӂ̒�������́F");
    scanf("%d%d%d",&h1,&h2,&h3);
    if((h1 > h2) && (h1 > h3)){
        left_Exp = h1*h1;
        right_Exp = h2*h2 + h3*h3;
        if(left_Exp == right_Exp){
            printf("���̓f�[�^�͒��p3�p�`�ł�\n");
        }else{
            printf("���̓f�[�^�́A���p�R�p�`�ł͂���܂���\n");
        }
    }else if((h2 > h1) && (h2 > h3)){
        left_Exp = h2*h2;
        right_Exp = h1*h1 + h3*h3;
        if(left_Exp == right_Exp){
            printf("���̓f�[�^�͒��p3�p�`�ł�\n");
        }else{
            printf("���̓f�[�^�́A���p�R�p�`�ł͂���܂���\n");
        }
    }else if((h3 > h1) && (h3 > h2)){
        left_Exp = h3*h3;
        right_Exp = h2*h2 + h1*h1;
        if(left_Exp == right_Exp){
            printf("���̓f�[�^�͒��p3�p�`�ł�\n");
        }else{
            printf("���̓f�[�^�́A���p�R�p�`�ł͂���܂���\n");
        }
    }else{
        printf("���̓f�[�^�́A���p�R�p�`�ł͂���܂���\n");
    }
    return 0;
}