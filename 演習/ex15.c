#include<stdio.h>

int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
double my_div(int x,int y);

int main(void){
    int a,b,c;

    printf("������2�f�[�^���́F");
    scanf("%d %d",&a,&b);
    printf("���Z���ʂ́A%d�ł�\n",add(a,b));
    printf("���Z���ʂ́A%d�ł�\n",sub(a,b));
    printf("��Z���ʂ́A%d�ł�\n",mul(a,b));
    if(b!=0){
        printf("���Z���ʂ́A%f�ł�\n",my_div(a,b));
    }else{
        printf("0�Ŋ���܂���\n");  
    }
    
    return 0;
}

int add(int x,int y){
    return x + y;
}

int sub(int x,int y){
    return x - y;
}

int mul(int x,int y){
    return x*y;
}

double my_div(int x,int y){
    return (double)x / (double)y;
}
