#include<stdio.h>
#include<math.h>

int power(int x,int y);

int main(void){
    int x,y;

    printf("�v���O�����̏I����Ctrl+z�ł��B\n");
    printf("������2�f�[�^����:");
    while(scanf("%d %d",&x,&y)==2){
        printf("pow(%d,%d) = %d\n",x,y,(int)pow(x,y));
        /*���Ls��power�֐��̃v���g�^�C�v�錾�Ǝ��̂��쐬���܂�*/
        printf("power(%d,%d) = %d\n",x,y,power(x,y));
        printf("�������Q�f�[�^����:");
    }
    return 0;
}

int power(int x,int y){
    int result = x;
    for(int i=1;i<y;i++){
        result*=x;
    }
    return result;
}