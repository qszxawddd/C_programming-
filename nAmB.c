#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i=0, j=0, tmp, digit1[4];
    int n, num[4];
    int A, B;

    srand(time(NULL));
    for(i=0;i<4;i++){ //�H�����ͤ@�ӥ|���
            digit1[i] = rand()%10;
        }
    while(digit1[0] == digit1[1] || digit1[1]==digit1[2] || digit1[2]==digit1[3] || digit1[0]==digit1[2] || digit1[0]==digit1[3] || digit1[1]==digit1[3]){
            //�Y�H���|��ƥX�{���ƼƦr�h���s���ͤ@�Ӽ�
        for(i=0;i<4;i++){
            digit1[i] = rand()%10; //�N�H�����|��Ʀs��ܰ}�C
        }
    }

    while (1) {
            A=B=0; //�k�s
        scanf("%d",&n); //�ϥΪ̿�J�@�ӥ|���

        num[0]=n/1000;
        num[1]=(n%1000)/100;
        num[2]=((n%1000)%100)/10;
        num[3]=((n%1000)%100)%10;
        //�N�|��Ʀs��ܰ}�C
        if(num[0] != num[1] && num[1]!=num[2] && num[2]!=num[3] && num[0]!=num[2] && num[0]!=num[3] && num[1]!=num[3]){
                //�Y�Ʀr�ҨS�����ƫh����j��
            for(i=0;i<4;i++){
                if(num[i]==digit1[i]) A++; //�|��ƻPdigit1�㦳�ۦP�Ʀr�B��m�ۦP �hA++
                    else{
                        for(j=0;j<4;j++)
                            if(num[i]==digit1[j]) B++; //�|��ƻPdigit1�㦳�ۦP�Ʀr����m���P �hB++
                    }
            }
            printf("%d%d%d%d=>%dA%dB\n",num[0],num[1],num[2],num[3],A,B);
            if(A==4) {
                printf("GOOD JOB!!");
                break;
            }

        }
        else printf("=>illegal\n"); //�Y�Ʀr���ƫh���X�k
    }

    return 0;
}
