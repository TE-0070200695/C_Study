#include<stdio.h>

int islower(int c){/*アルファベット小文字*/
    return  'a'<= c && c <= 'z';
}

int isupper(int c){/*アルファベット大文字*/
    return 'A' <= c && c <= 'Z';
}

int isalpha(int c)/*アルファベット文字*/
{
    return islower(c) || isupper(c);
}
int main(void){

}