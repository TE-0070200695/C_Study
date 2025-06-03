#include<stdio.h>
#include<string.h>

int my_strlen(const char []);

int main(void){
    char s[256];

    printf("Enter string : ");
    while(scanf("%s",&s) == 1){
        printf("•¶š”‚ÍA%d‚Å‚·\n",strlen(s));
        printf("•¶š”‚ÍA%d‚Å‚·\n",my_strlen(s));
        printf("Enter string : ");
    }
    return 0;
}

int my_strlen(const char s[]){
    int c_count =0;
    /*
    while(s[c_count]!='\0'){
        c_count++;
    }*/
   while(s[c_count]){
    c_count++;
   }
    return c_count;
}