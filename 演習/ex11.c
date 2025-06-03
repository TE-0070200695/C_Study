#include<stdio.h>

int main(void){
    int sum = 0;
    int i = 1;
    while(i<101){
        sum+=i++;
    }
    printf("1‚©‚ç100‚Ü‚Å‚Ì˜a‚ÍA%d‚Å‚·\n",sum);
    return 0;
}