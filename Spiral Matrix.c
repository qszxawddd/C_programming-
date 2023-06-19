#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int i = 0, j = 0, n, k = 1;
    int a[10][10];

    scanf("%d", &n);

    for (i = 0; i <= n / 2; i++) { //circle controls
        for (j = i; j < n - i; j++) //Up
            a[i][j] = k++;
        for (j = i + 1; j < n - i; j++) //Right
            a[j][n - i - 1] = k++;
        for (j = n - i - 2; j > i; j--) //Down
            a[n - i - 1][j] = k++;
        for (j = n - i - 1; j > i; j--) //Left
            a[j][i] = k++;
    }
    for (i = 0; i < n; i++) {  //print matrix
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
