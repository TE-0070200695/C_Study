#include<stdio.h>

/*���̃v���O�����͕�������ɃA���t�@�x�b�g�����邩�ǂ������m�F���邽�߂̃v���O�����ł��B */

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

