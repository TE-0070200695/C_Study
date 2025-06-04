#include<stdio.h>
#include<string.h>

int my_strlen(const char *);

int main(void){
    char s[256];

    printf("&s[0] = %p\n",&s[0]);
    printf("Enter String : ");
    while(scanf("%s",s)==1){
        printf("•¶š”‚ÍA%d‚Å‚·\n",strlen(s));
        printf("•¶š”‚ÍA%d‚Å‚·\n",my_strlen(s));
        printf("Enter string :");
    }
    return 0;
}

int my_strlen(const char *ps){
    int i=0;
    while(*ps){
        i++;
        ps++;
    }
    return i;
}

/*
int my_strlen(const char ps[]){
    int i;
    i = 0;
    while(ps[i]){
        i++;
    }
    return i;
}
*/