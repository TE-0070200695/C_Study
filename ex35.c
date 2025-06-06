#include<stdio.h>
#include<stdlib.h>

char *input_str(char *);
int my_atoi(const char * );

int main(void){
    char s[256];

    while(input_str(s)){
        printf("•W€ŠÖ” >%d<\n",atoi(s));
        printf("Ž©ìŠÖ” >%d<\n",my_atoi(s));
    }
    return 0;
}

char *input_str(char *str){
    printf("Enter string :");
    return gets(str);
}

int my_atoi(const char * s){
    int p=0;
    int Code_F=0;
    if(*s==45){
        Code_F=1;
        s++;
    }
    while(*s){
            printf("%d\n",*s);
            p*=10;
            p+=*s-48;
            s++;
    }
    if(Code_F)p*=-1;
    return p;
}