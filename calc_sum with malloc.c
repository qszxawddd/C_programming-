#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

void sum_array(int *arr, int size, int *sum);


int main() {
    int i=0, j=1;
    int n = 0; // keep the number of input integers
    int sum; // result
    int *arr = (int *)malloc(SIZE * sizeof(int));
    while (scanf("%d", &arr[n++])!=EOF) {
        if (n==SIZE*j-1) {
            arr = realloc(arr, SIZE*(j+1));
        }
    };
    n--;
    printf("How many numbers do we have? %d\n", n);
    sum_array(arr, n, &sum); // compute the result here
    printf("sum: %d", sum);
    free(arr);
    return 0;
}

void sum_array(int *arr, int size, int *sum) {
    int i;
    *sum = 0;
    for (i=0; i<size; i++) {
        *sum += arr[i];
    }
}
