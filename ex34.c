#include<stdio.h>
#include<string.h>

char *input_str(char *);
char *my_strrev(char *);

int main(void){
    char s[256],my_s[256];

    while(input_str(s)){
        strcpy(my_s,s);
        printf("Šù¬ŠÖ” >%s<\n",strrev(s));
        printf("Ž©ìŠÖ” >%s<\n",my_strrev(my_s));/*‚±‚ÌŠÖ”‚ðì¬‚µ‚Ü‚·*/
    }
    return 0;
}

char *input_str(char *str){
    printf("Enter string : ");
    return gets(str);
}

char *my_strrev(char *str){
    char *p1 = str,*p2;
    p2 = p1 + strlen(p1)-1;

    while(p1 < p2){
        char w;

        w = *p1;
        *p1 = *p2;
        *p2 = w;

        p1++;
        p2--;
    }
    return str;
}