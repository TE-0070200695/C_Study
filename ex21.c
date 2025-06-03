#include<stdio.h>
#include<limits.h>

int main(void){
    int data[100],n,i,sum,max;/*sum変数は合計値格納用に使用します*/

    sum = 0;
    /*キーボード利用による入力処理*/
    printf("入力データ数は100個までです。\n");
    n = 0;
    printf("%p番地に入力：",&data[n]);
    while(scanf("%d",&data[n])==1){
        sum += data[n];
        n++;
        printf("%p番地に入力：",&data[n]);
    }
    printf("格納された データ\n");
    for(i=0;i<n;i++){
        printf("data[%d] = %d\n",i,data[i]);
    }
    printf("合計値は%dです。\n",sum);
    /*最大値検索処理用に繰り返しを作成します*/
    if(n){
        max = INT_MIN;
        for(i=0;i<n;i++){
            if(max < data[i])max = data[i];
        }
        printf("最大値は、%dです。",max);
    }
    return 0;
}