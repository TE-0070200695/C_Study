#include<stdio.h>

int main(void){
    int x,y;

    x = 10;
    y = 3;
    
    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d %% %d = %d\n\n",x,y,x%y);

    printf("x y ���́F");
    //scanf���ɂ̓R�����g�������Ȃ�����
    scanf("%d %d",&x,&y);
    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d - %d = %d\n",x,y,x-y);
    printf("%d + %d = %d\n",x,y,x+y);
    return 0;
}