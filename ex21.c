#include<stdio.h>
#include<limits.h>

int main(void){
    int data[100],n,i,sum,max;/*sum�ϐ��͍��v�l�i�[�p�Ɏg�p���܂�*/

    sum = 0;
    /*�L�[�{�[�h���p�ɂ����͏���*/
    printf("���̓f�[�^����100�܂łł��B\n");
    n = 0;
    printf("%p�Ԓn�ɓ��́F",&data[n]);
    while(scanf("%d",&data[n])==1){
        sum += data[n];
        n++;
        printf("%p�Ԓn�ɓ��́F",&data[n]);
    }
    printf("�i�[���ꂽ �f�[�^\n");
    for(i=0;i<n;i++){
        printf("data[%d] = %d\n",i,data[i]);
    }
    printf("���v�l��%d�ł��B\n",sum);
    /*�ő�l���������p�ɌJ��Ԃ����쐬���܂�*/
    if(n){
        max = INT_MIN;
        for(i=0;i<n;i++){
            if(max < data[i])max = data[i];
        }
        printf("�ő�l�́A%d�ł��B",max);
    }
    return 0;
}