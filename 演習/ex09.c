#include<stdio.h>

int main(void){
    int m,d;

    printf("1�`12�܂ł̌�����͂��Ă��������F");
    scanf("%d",&m);
    if(m>12 || 1 > m){
        printf("%d�͌�������܂���I�I\n",m);
        return -1;
    }
    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            d = 31;
            break;
        case 2:
            d = 28;
            break;
        default:
            d = 30;
            break;
    }
    printf("%d����%d������܂��I�I\n",m,d);
    return 0;
}