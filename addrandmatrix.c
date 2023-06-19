#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[3][3],b[3][3],sum[3][3];
    int i, j;

    srand(time(NULL));

    printf("a:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            a[i][j]=rand()%100;
            printf("[%d][%d]=%2d, ",i, j, a[i][j]);
        }
        printf("\n");
    }
    printf("b:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            b[i][j]=rand()%100;
            printf("[%d][%d]=%2d, ",i, j, b[i][j]);
        }
        printf("\n");
    }
    printf("\nThe addition of matrix a and matrix b:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("[%d][%d]=%2d, ",i, j, a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
