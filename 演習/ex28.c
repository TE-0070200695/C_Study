#include<stdio.h>
#include<string.h>

void my_strupr(char []);

int main(void){
    char s[256],my_s[256];

    printf("Enter string : ");
    while(scanf("%s",s) == 1){
        strcpy(my_s,s);

        strupr(s);
        printf("�W���֐��̕ϊ����� >%s< \n",s);

        my_strupr(my_s);/*���̊֐����쐬���܂��B*/
        printf("����֐��̕ϊ����� >%s< \n",my_s);

        printf("Enter string :");
    }
    return 0;
}

void my_strupr(char s[]){
    int i=0;
    while(s[i]){
        if(0x61 <=s[i] && s[i] <= 0x7a){
            s[i] -= 0x20;
        }
        i++;
    }
}