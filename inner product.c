#include<stdio.h>
int main()
{
    int arrayA[100],arrayB[100]; //宣告陣列A和B
    int N, i, sum=0;

    scanf("%d",&N); //設一陣列有幾個數

    for(i=0;i<N;i++){
        scanf("%d",&arrayA[i]); //輸入A陣列的值
    }
    for(i=0;i<N;i++){
        scanf("%d",&arrayB[i]); //輸入B陣列的值
    }
    for(i=0;i<N;i++){
        sum+=arrayA[i]*arrayB[i]; //求內積
    }
    printf("The inner product <A,B>:%d",sum);

    return 0;
}
