#include<stdio.h>

int main(void){
    int x,y;

    x = 10;
    y = 3;
    
    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d %% %d = %d\n\n",x,y,x%y);

    printf("x y “ü—ÍF");
    //scanf“à‚É‚ÍƒRƒƒ“ƒg‚ğ‘‚©‚È‚¢‚±‚Æ
    scanf("%d %d",&x,&y);
    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d - %d = %d\n",x,y,x-y);
    printf("%d + %d = %d\n",x,y,x+y);
    return 0;
}