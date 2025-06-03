#include<stdio.h>
#include<string.h>

void my_strcpy(char [],const char []);

int main(void){
    char uke[256],okuri[256],my_uke[256]="syokichi no mohiretu desu";

    printf("Enter string : ");
    while(scanf("%s",&okuri)==1){
        strcpy(uke,okuri);
        printf("strcpy関数のコピーした文字列は >%s< です\n",uke);
        printf("オリジナル文字列は >%s< です\n",okuri);

        my_strcpy(my_uke,okuri);/*この関数を作成します*/
        printf("my_strcpy関数のコピーした文字列は >%s< です\n",my_uke);
        printf("オリジナル文字列は >%s< です\n",okuri);       
        
        printf("Enter string : ");
    }
    return 0;
}

void my_strcpy(char my_uke[],const char okuri[]){
    int i = 0;
    while(my_uke[i]=okuri[i]){
        i++;
    }
}
