#include <stdio.h>

int main()
{
    int num, i, flag=0, prime=0;

    printf("Enter the number: ");

    while (scanf("%d", &num) != EOF) { //輸入值

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0 && num != 2) // 符合該條件則不是質數
            {
                flag = 1; //若不為質數則flag=1
                break;
            }
        }
        if (flag == 0) { //若flag=0則為質數
            prime++;
        }
        flag = 0;
    }

    printf("%d",prime);

    return 0;
}
