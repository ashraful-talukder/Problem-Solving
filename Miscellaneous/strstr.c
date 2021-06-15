#include<stdio.h>

int main()
{
    char a[20],b[10];
    gets(a);
    gets(b);
    char *v=strstr(a,b);
    printf("%d",v);
    return 0;
}
