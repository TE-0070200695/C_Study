#include<stdio.h>

int main(void){
    int x,y;

    printf("x y ���́F");
    scanf("%d %d",&x,&y);

    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d - %d = %d\n",x,y,x-y);
    printf("%d * %d = %d\n",x,y,x*y);
    /*���̓f�[�^���A10��3�ł���΁A0.33333�̗l��*/
    /*���L�̂P�s�̑���������ύX���āA�����_�ȉ���%f�����\���ł���悤�ɕύX���܂��B*/
    //printf("%d / %d = %d\n",x,y,x/y);
    printf("%d / %d = %f\n",x,y,(double)x/y);
    printf("%d %%  %d = %d\n",x,y,x%y);
}