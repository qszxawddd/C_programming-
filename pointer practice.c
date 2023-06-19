#include <stdio.h>

int main()
{
    char str[100]="Pointer";
    char str1[100]="Practice";


    char *a = str;
    char *b = str1;

    while(*a){
        a++;
    }
    while(*b){
        *a = *b;
        a++;
        b++;
    }

    *a = '\0';
    printf("\nStr:%s ", str);
    return 0;
}
