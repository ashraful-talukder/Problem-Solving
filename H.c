#include<stdio.h>

int max(int a,int b, int c)
{
    if(a>b && a>c)
    {
        printf("Maximum is %d",a);
    }
    else if(b>a && b>c)
    {
        printf("Maximum is %d",b);
    }
    else
    {
        printf("Maximum is %d",c);
    }
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    max(x,y,z);
    return 0;
}

