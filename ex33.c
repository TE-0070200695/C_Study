#include<stdio.h>
#include<string.h>

char *input_str(char *);
int my_strcmp(const char *,const char *);

int main(void){
    char s1[256],s2[256];
    int ans;

    while(input_str(s1) && input_str(s2)){
        ans = strcmp(s1,s2);
        printf("•W€ŠÖ” ");
        if(ans > 0) printf("%s > %s\n",s1,s2);
        else if(ans < 0) printf("%s < %s\n",s1,s2);
        else    printf("%s = %s\n",s1,s2);

        printf("Ž©ìŠÖ” ");
        ans = my_strcmp(s1,s2);
        if(ans > 0) printf("%s > %s\n",s1,s2);
        else if(ans < 0) printf("%s < %s\n",s1,s2);
        else    printf("%s = %s\n",s1,s2);
    }
}

char *input_str(char *str){
    printf("Enter string :");
    return gets(str);
}

/*
int my_strcmp(const char *p1,const char *p2){
    while(*p1){
        if(*p1 != *p2){
            return (int)*p1 - (int)*p2;
        }else{
            p1++;
            p2++;
        }
    }
    return 0;   
}
*/

int my_strcmp(const char *p1,const char *p2){
    while(*p1 == *p2 && *p1){
        p1++;
        p2++;
    }
    return *p1 - *p2;
}