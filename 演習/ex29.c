#include<stdio.h>

int input_int(int *);/*�X�e�b�v�P�F���̊֐����g��*/
void swap_int(int *,int *);/*�X�e�b�v�Q�F���̊֐������*/

int main(void){
    int a,b,c,r1,r2,r3,w;

    r1 = input_int(&a);
    r2 = input_int(&b);
    r3 = input_int(&c);
    while(r1 && r2 && r3){
        printf("�r���o�߁F%d %d %d\n",a,b,c);
        if(a > b){
            swap_int(&a,&b);
        }
        printf("�r���o�߁F%d %d %d\n",a,b,c);
        if(a > c){
            swap_int(&a,&c);
        }
        printf("�r���o�߁F%d %d %d\n",a,b,c);
        if(b > c){
            swap_int(&b,&c);
        }
        printf("�r���o�߁F%d %d %d\n",a,b,c);
        if(a * a + b * b == c * c)printf("���p�O�p�`�ł��B\n");

        r1 = input_int(&a);
        r2 = input_int(&b);
        r3 = input_int(&c);
    }
    return 0;
}

int input_int(int *p){
    printf("�����F");
    return scanf("%d",p)==1;
}

void swap_int(int *p1,int *p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}