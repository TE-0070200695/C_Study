#include<stdio.h>

int main(void){
    int m,d;

    printf("1�`12�܂ł̌�����͂��Ă�������:");
    scanf("%d",&m);
    if(m>12 || 1>m){
        printf("%d�͌��ɂ���܂���I�I\n",m);
        return -1;
    }

    if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)){
        d=31;
    }else if(m==2){
        d=28;
    }else{
        d = 30;
    }
    printf("%d���̓�����%d���ł�\n",m,d);
    
    return 0;
}