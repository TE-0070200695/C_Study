#include<stdio.h>

int main(void){
    char c;

    c = 0x20;
    /*1行80字の制約から、下記のprintf行を変更せずに、必ず使ってください*/

    while(1){
        if(c == 0x7f)break;
        printf("%c %3d %x|",c,c,c);
        c++;
    }
    /*
    for(c=0x20;c<=0x7e;c++){
        printf("%c %3d %x|",c,c,c);
    }
    */

    return 0;
}