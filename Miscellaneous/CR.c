#include<stdio.h>
#include<string.h>

int main()
{
    float a,b;
    char c;
    scanf("%f %f",&a ,&b);
    printf("Enter your choice:");
    gets(c);
    if(c=='A')
    {
        printf("%f",a+b);
    }
    else
    {
        printf("%f",a-b);
    }
    return 0;
}
