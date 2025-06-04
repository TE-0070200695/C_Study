#include<stdio.h>
#include<string.h>

int my_strcmp(const char [],const char []);

int main(void){
    char s1[256],s2[256];
    int ans;

    printf("Enter strings :");
    while(scanf("%s%s",s1,s2)== 2){
        ans = strcmp(s1,s2);
        printf("•W€ŠÖ”‚Ì”»’fŒ‹‰Ê\n");
        if(ans > 0)      printf("%s > %s\n",s1,s2);
        else if(ans < 0) printf("%s < %s\n",s1,s2);
        else             printf("%s = %s\n",s1,s2);
   
        ans = my_strcmp(s1,s2);/*‚±‚ÌŠÖ”‚ðì¬‚µ‚Ü‚·*/
        printf("Ž©ìŠÖ”‚Ì”»’fŒ‹‰Ê\n");
        if(ans > 0)      printf("%s > %s\n",s1,s2);
        else if(ans < 0) printf("%s < %s\n",s1,s2);
        else             printf("%s = %s\n",s1,s2);
   
        printf("Enter strings :");
    }
}

int my_strcmp(const char s1[],const char s2[]){
    int i=0;
    while(s1[i] == s2[i] && s1[i]){
        i++;
    }
    return s1[i] - s2[i];
}   