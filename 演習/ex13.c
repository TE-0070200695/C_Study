#include<stdio.h>

int main(void){
    int i=1;
    while(i<10){
        int j=1;
        while(j<10){
            printf("%d*%d= %2d ",i,j,i*j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}