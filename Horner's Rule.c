#include <stdio.h>
#include <stdlib.h>

int HornerRule(int coef[], int start, int degree, int x);

int main()
{
    int i = 0, count = 0;
    int result = 0;
    int x = 1;
    int arr[100];

    scanf("%d", &count);

    for (i=0; i<=count; i++) {
        scanf("%d", &arr[i]);
    }
    //the value of x
    x = arr[count];

    result = HornerRule(arr, 0, count-1, x);
    printf("%d\n", result);
    return 0;
}

int HornerRule(int c[], int i, int d, int x)
{
    if (i == d) return c[d];
    else
        return c[i] + x*HornerRule(c, i+1, d, x);
}
