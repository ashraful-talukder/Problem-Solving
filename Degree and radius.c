#include<stdio.h>

int main()
{
    float a,r1,r2;
    printf("Enter the angle in degree:");
    scanf("%f",&a);
    r1=a*3.14159;
    r2=r1/180;
    printf("%f degree is %f in radians",a,r2);
    return 0;
}

