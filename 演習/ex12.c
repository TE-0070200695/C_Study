#include<stdio.h>

int main(void){
    int i;
    
    for(i = 0; i < 10; i++){
        printf("%d\n",i);
    }
    printf("***********\n");
    for(;0 < i; i--){
        printf("%d\n",i);
    }
    /*
    for(i = 10;0<i;i--){
        printf("%d\n",i);
    }
    */
    return 0;
}