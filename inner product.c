#include<stdio.h>
int main()
{
    int arrayA[100],arrayB[100]; //�ŧi�}�CA�MB
    int N, i, sum=0;

    scanf("%d",&N); //�]�@�}�C���X�Ӽ�

    for(i=0;i<N;i++){
        scanf("%d",&arrayA[i]); //��JA�}�C����
    }
    for(i=0;i<N;i++){
        scanf("%d",&arrayB[i]); //��JB�}�C����
    }
    for(i=0;i<N;i++){
        sum+=arrayA[i]*arrayB[i]; //�D���n
    }
    printf("The inner product <A,B>:%d",sum);

    return 0;
}
