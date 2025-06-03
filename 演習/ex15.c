#include<stdio.h>

int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
double my_div(int x,int y);

int main(void){
    int a,b,c;

    printf("整数を2データ入力：");
    scanf("%d %d",&a,&b);
    printf("加算結果は、%dです\n",add(a,b));
    printf("減算結果は、%dです\n",sub(a,b));
    printf("乗算結果は、%dです\n",mul(a,b));
    if(b!=0){
        printf("除算結果は、%fです\n",my_div(a,b));
    }else{
        printf("0で割れません\n");  
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
