//Casting variable

#include<stdio.h>

int main()
{
    int b;
    float c;
    scanf("%f",&c);
    b=c;
    if(c/b==1)
    {
        printf("Integer");
    }
    else
    {
        printf("Float");
    }
    return 0;
}

