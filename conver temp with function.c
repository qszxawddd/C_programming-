#include<stdio.h>

float temperature_convert(float degree);

int main()
{
    float temp, cel_degree;

    scanf("%f",&temp);

    cel_degree = temperature_convert(temp);

    printf("%f",cel_degree);

    return 0;
}

float temperature_convert(float deg)
{
    return (deg-32)*5/9;
}
