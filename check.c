#include<stdio.h>

int islower(int c){/*�A���t�@�x�b�g������*/
    return  'a'<= c && c <= 'z';
}

int isupper(int c){/*�A���t�@�x�b�g�啶��*/
    return 'A' <= c && c <= 'Z';
}

int isalpha(int c)/*�A���t�@�x�b�g����*/
{
    return islower(c) || isupper(c);
}
int main(void){

}