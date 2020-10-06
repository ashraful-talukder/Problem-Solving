#include<stdio.h>

char a[30];

int myprintf()
{
    printf("What is your name?\n");
    scanf("%s",a);
}
int main()
{
    myprintf();
    printf("The name is %s",a);
}
