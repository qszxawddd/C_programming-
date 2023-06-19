#include<stdio.h>
#include<string.h>
int count=0;
void permute(char a[], int left, int right)
{
    int i;
    if(left == right){
        count++;
        printf("%s\n", a);
    }
    else {
        for(i=left; i<= right; i++){
            swap(a, left, i);
            permute(a, left+1, right);

            swap(a, left, i);
        }
    }
}

void swap(char array[], int first, int second)
{
    char temp;
    temp = array[first];
    array[first] = array[second];
    array[second] = temp;
}

int main()
{
    char str[1000];
    scanf("%s", str);
    int n = strlen(str);
    permute(str, 0, n-1);
        printf("# permutations: %d\n", count);
        return 0;
}
