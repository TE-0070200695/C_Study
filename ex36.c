#include<stdio.h>
#include<ctype.h>

char *input_str(char *);
int hextoi(char *p);


int main(void){
    char s[256];
    int i;

    while(input_str(s)){
        sscanf(s,"%x",&i);
        printf("sscanf >%x< >%X<\n",i,i);
        printf("hextoi�֐��́A>%x<�ł�\n",hextoi(s));/*���̊֐����쐬���܂��B*/
    }
    return 0;
}

char *input_str(char *str){
    printf("Enter string :");
    return gets(str);
}

int hextoi(char *p){
    int ans = 0;
    while(isxdigit(*p)){
        if(isdigit(*p)){
            ans = ans * 16 + *p++ - '0';//
        }else{
            ans = ans * 16 + *p++ - 'W';//
        }
    }
    return ans;
}