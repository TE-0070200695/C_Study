#include<stdio.h>
#include<string.h>

void my_strcat(char [],char[]);

int main(void){
    char uke[256],okuri[256],my_uke[256];

    printf("Enter strings :");
    while(scanf("%s%s",uke,okuri)==2){
        strcpy(my_uke,uke);
        printf("�I���W�i��������́A >%s< >%s< �ł�\n",uke,okuri);

        strcat(uke,okuri);
        printf("�W��strcat�́A�󂯎��ɑ����t��>%s< >%s< \n",uke,okuri);

        my_strcat(my_uke,okuri);/*���̊֐������܂��B*/
        printf("my_strcat�� >%s< >%s< \n",my_uke,okuri);

        printf("Enter string:");
    }
    return 0;
}

void my_strcat(char s1[],char s2[]){
    int i=0;
    i = strlen(s1);
    strcpy(&s1[i],&s2[0]);
}