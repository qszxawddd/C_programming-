#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    int i=0;

    for(i=0; i<10; i++){

        printf("a[%d]=%d; ", i, *ptr);

        ptr++;
    }
    return 0;
}
