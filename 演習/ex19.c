#include<stdio.h>

int isurudoshi(int year);
int getdays(int year,int month);

int main(void){
    int year,month,days;

    printf("�v���O�����̏I����Ctrl+z�ł��B\n");
    printf("���͗� 2000 2\n");
    printf("����̔N������́F");
    while(scanf("%d %d",&year,&month)==2){
        if(1<=month && month<=12){
            days = getdays(year,month);
            printf("%d�N%d���̓�����%d���ł�\n",year,month,days);
        }else{
            printf("���̓G���[ �P�`�P�Q���ȊO�͑��݂��܂���\n");
        }
        printf("����̔N������́F");
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