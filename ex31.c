#include<stdio.h>
#include<string.h>

void my_strcpy(char *,const char *);

int main(void){
    char uke[256],okuri[256],my_uke[256] = "syokichi no mojiretu desu";

    printf("Enter string : ");
    while(scanf("%s",okuri)== 1){
        printf("オリジナル文字列は、   >%s<です\n",okuri);

        strcpy(uke,okuri);
        printf("strcpy関数のコピーした文字列は、 >%s<です\n",uke);

        my_strcpy(my_uke,okuri);
        printf("my_strcpy関数のコピーした文字列は、 >%s<です\n",my_uke);

        printf("Enter String : ");
    }
    return 0;
}

void my_strcpy(char *p1,const char *p2){
    while(*p1 = *p2){
        p1++;
        p2++;
    }
}