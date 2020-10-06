#include<stdio.h>

int main()
{
    int v,r,i;
    printf("Enter the resistance:");
    scanf("%d",&r);
    printf("Enter the voltage:");
    scanf("%d",&v);
    i=v/r;
    printf("The answer is %d",i);
    return 0;
}
