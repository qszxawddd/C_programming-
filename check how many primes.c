#include <stdio.h>

int main()
{
    int num, i, flag=0, prime=0;

    printf("Enter the number: ");

    while (scanf("%d", &num) != EOF) { //��J��

        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0 && num != 2) // �ŦX�ӱ���h���O���
            {
                flag = 1; //�Y������ƫhflag=1
                break;
            }
        }
        if (flag == 0) { //�Yflag=0�h�����
            prime++;
        }
        flag = 0;
    }

    printf("%d",prime);

    return 0;
}
