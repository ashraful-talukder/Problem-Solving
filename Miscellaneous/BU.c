#include<stdio.h>

int main()
{
    int X,Z,count=0,c=0;
    scanf("%d",&X);
    do
    {
        scanf("%d",&Z);
    }
    while(X>=Z);
    while(count<=Z)
    {
        count=count+X;
        X=++X;
        ++c;
    }
    printf("%d\n",c);
    return 0;
}
