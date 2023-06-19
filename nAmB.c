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
    for(i=0;i<4;i++){ //繦诀玻ネ计
            digit1[i] = rand()%10;
        }
    while(digit1[0] == digit1[1] || digit1[1]==digit1[2] || digit1[2]==digit1[3] || digit1[0]==digit1[2] || digit1[0]==digit1[3] || digit1[1]==digit1[3]){
            //璝繦诀计瞷狡计玥穝玻ネ计
        for(i=0;i<4;i++){
            digit1[i] = rand()%10; //盢繦诀计皚
        }
    }

    while (1) {
            A=B=0; //耴箂
        scanf("%d",&n); //ㄏノ块计

        num[0]=n/1000;
        num[1]=(n%1000)/100;
        num[2]=((n%1000)%100)/10;
        num[3]=((n%1000)%100)%10;
        //盢计皚
        if(num[0] != num[1] && num[1]!=num[2] && num[2]!=num[3] && num[0]!=num[2] && num[0]!=num[3] && num[1]!=num[3]){
                //璝计⊿Τ狡玥磅︽癹伴
            for(i=0;i<4;i++){
                if(num[i]==digit1[i]) A++; //计籔digit1ㄣΤ计竚 玥A++
                    else{
                        for(j=0;j<4;j++)
                            if(num[i]==digit1[j]) B++; //计籔digit1ㄣΤ计竚ぃ 玥B++
                    }
            }
            printf("%d%d%d%d=>%dA%dB\n",num[0],num[1],num[2],num[3],A,B);
            if(A==4) {
                printf("GOOD JOB!!");
                break;
            }

        }
        else printf("=>illegal\n"); //璝计狡玥ぃ猭
    }

    return 0;
}
