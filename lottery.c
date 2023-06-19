#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int bingo[6], num[6], times=0, sum=0;
    int i, j;
    srand(time(NULL));
    for(i=0; i<6; i++){
            bingo[i] = rand() % 49 + 1; //產生中獎號碼
        }
        if(bingo[0]==bingo[1] || bingo[0]==bingo[2] || bingo[0]==bingo[3] || bingo[0]==bingo[4] || bingo[0]==bingo[5] || bingo[1]==bingo[2] || bingo[1]==bingo[3] || bingo[1]==bingo[4] || bingo[1]==bingo[5] || bingo[2]==bingo[3] || bingo[2]==bingo[4] || bingo[2]==bingo[5] || bingo[3]==bingo[4] ||bingo[3]==bingo[5] ||bingo[4]==bingo[5]){
                //若重複則再產生一次
            for(i=0; i<6; i++){
            bingo[i] = rand() % 49 + 1;
        }
    }
    while(scanf("%d %d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]) != EOF){
            //一一比對中獎號碼
        for(i=0; i<6; i++){
            for(j=0; j<6; j++){
                if(bingo[i]==num[j]){
                    times++;
                }
            }
        }
        if(times==3) sum+=400;
            else if(times==4) sum+=1000;
                else if(times==5) sum+=10000;
                    else if(times==6) sum+=100000;
                        else sum+=0;
        times=0; //歸零
    }
    printf("%d",sum);
}
