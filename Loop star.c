#include<stdio.h>

int main()
{
    int a,b,c,d;
    for(a=1;a<=5;a++)
    {
        for(b=a;b<=5;b++)
        {
            printf(" ");
        }
        for(c=a;c>0;c--)
        {
            printf("*");
        }
        for(d=2;d<=a;d++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
