#include<stdio.h>

/*int�����̊֐��̏ꍇ�A�v���g�^�C�v��Y��Ă��G���[�ɂ͂Ȃ�܂��񂪁A
�Y�ꂸ�Ƀv���g�^�C�v�錾���܂��傤*/
int isurudoshi(int year);

int main(void){
    int year,y_n;

    y_n = 1;
    printf("�v���O�����̎��Ctrl+z�ł��B\n");
    printf("����̔N����́F");
    while(scanf("%d",&year)==1){
        /*���L�̍s�̃R�����g���O���Ď��s�ł���悤�ɁAisurudoshi�֐����쐬���܂�*/
        y_n = isurudoshi(year);
        if(y_n){
            printf("%d�N�͉[�N�ł�\n",year);
        }else{
            printf("%d�N�͕��N�ł�\n",year);
        }
        printf("����̔N�����:");
    }
    return 0;
}

int isurudoshi(int year){
    /*s
    if(year%4){
        return 0;
    }else if(year%100){
        return 1;
    }else if(year%400){
        return 0;
    }else{
        return 1;
    }
    */
    return !(year%4)&&(year%100)||!(year%400);
}