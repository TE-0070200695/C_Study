#include<stdio.h>

int main(void){
    int x;

    printf("x=");
    scanf("%d",&x);
    if(x<0)
        printf("0ˆÈã‚Ì’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
        return 1;
    if(x%2==1){
        printf("x = %d Šï”‚Å‚·\n",x);
    }else{
        printf("x = %d ‹ô”‚Å‚·\n",x);
    }
    return 0;
}