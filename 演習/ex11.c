#include<stdio.h>

int main(void){
    int sum = 0;
    int i = 1;
    while(i<101){
        sum+=i++;
    }
    printf("1����100�܂ł̘a�́A%d�ł�\n",sum);
    return 0;
}