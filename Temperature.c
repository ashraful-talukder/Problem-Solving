#include<stdio.h>

int main()
{
    float d,r2,r3;
    printf("Enter the temperature in degree centigrade:");
    scanf("%f",&d);
    r2=d*1.8;
    r3=r2+5;
    printf("%f degree centigrade is %f degree Fahrenheit",d,r3);
    return 0;
}

