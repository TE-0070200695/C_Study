#include<stdio.h>

int main(void){
    int x,y;

    printf("x y ���́F");
    scanf("%d %d",&x,&y);

    /*���̓f�[�^���A�R�ƂO�ł���΁A�[�����Z�G���[�łƂ܂�܂�*/
    /*y�ϐ��̓��͒l���A�O�ł����Ă�����Ƀv���O�������I���ł���悤�ɂ��܂��B*/
    if(y){
         printf("%d %d = %d\n",x,y,x/y);
    }else{
        printf("0�ł�邱�Ƃ͂ł��܂���\n");
        
    }
    return 0;
}