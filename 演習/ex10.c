#include<stdio.h>

int main(void){
    int i;

    i = 0;
    while(i < 10){
        printf("%d\n",i);
        i++;
    }
    printf("**********\n");
    while(0 < i){
        printf("%d\n",i);
        i--;
    }
    return 0;
    
}