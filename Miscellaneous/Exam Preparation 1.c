#include<stdio.h>

int main()
{
    int a,b,c,d;
    for(a=1;a<=5;a++)
    {
        for(b=5;b>=a;b--)
        {
            printf(" ");
        }
        for(c=1;c<=(a*2)-1;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
