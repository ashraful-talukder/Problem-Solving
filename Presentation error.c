#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        if(b>c)
        {
            printf("%d\n%d\n%d\n\n",c,b,a);
        }
        else if(c>b)
        {
            printf("%d\n%d\n%d\n\n",b,c,a);
        }
    }
    else if(b>a && b>c)
    {
        if(a>c)
        {
            printf("%d\n%d\n%d\n\n",c,a,b);
        }
        else if(c>a)
        {
            printf("%d\n%d\n%d\n\n",a,c,b);
        }
    }
    else if(c>a && c>b)
    {
        if(b>a)
        {
            printf("%d\n%d\n%d\n\n",a,b,c);
        }
        else if(a>b)
        {
            printf("%d\n%d\n%d\n\n",b,a,c);
        }
    }
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}


