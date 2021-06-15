#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(b>a && c>b && c-b<b-a)
    {
        printf(":(\n");
    }
    else if(b>a && c>b && c-b>=b-a)
    {
        printf(":)\n");
    }
    else if(a>b && b>c && b-c<a-b)
    {
        printf(":)\n");
    }
    else if(a>b && b>c && b-c>=a-b)
    {
        printf(":(\n");
    }
    else if(a>b && b>=c)
    {
        printf(":)\n");
    }
    else if(b>a && b>=c)
    {
        printf(":(\n");
    }

    else if(a==b && c>b)
    {
        printf(":)\n");
    }
    else if(a==b && c<b)
    {
        printf(":(\n");
    }
    return 0;
}
