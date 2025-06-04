#include<stdio.h>
#include<string.h>

char *input_str(char *);

char *my_strcat(char * ,char *);

int main(void){
    char uke[256],okuri[256],my_uke[256];

    while(input_str(uke) && input_str(okuri)){
        strcpy(my_uke,uke);
        printf("ƒIƒŠƒWƒiƒ‹strcat >%s< >%s< \n",strcat(uke,okuri),okuri);
        printf("Ž©ì‚Ìmy_strcat >%s< >%s< \n",my_strcat(my_uke,okuri),okuri);

    }
    return 0;
}

char *input_str(char *str){
    printf("Enter string :");
    return gets(str);
}

char *my_strcat(char *p1,char *p2){
    strcpy(p1 + strlen(p1),p2);
    return p1;
}