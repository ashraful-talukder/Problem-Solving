#include<stdio.h>

int main()
{
    int v,m,a;//here v=volume,m=mass and a=answer
    printf("Enter the mass:");
    scanf("%d",&m);
    printf("Enter the volume:");
    scanf("%d",&v);
    a=m/v;
    printf("The answer is %d",a);
    return 0;
}
