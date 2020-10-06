#include<stdio.h>

int main()
{
    float i,r;
    printf("Enter the length in inches:");
    scanf("%f",&i);
    r=i*25.4;
    printf("%f inch(s) is %f mm",i,r);
    return 0;
}

