#include<stdio.h>

int main(void){
    int sum = 0;
    int i = 1;
    while(i<101){
        sum+=i++;
    }
    printf("1から100までの和は、%dです\n",sum);
    return 0;
}