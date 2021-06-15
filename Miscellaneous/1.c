#include<stdio.h>

int main()
{
    int j;
    char cg[1000];
    printf("Enter your string: ");
    gets(cg);
    j=strlen(cg);
    j--;
    printf("Reverse string: ");
    while(j>=0)
    {
        printf("%c",cg[j]);
        j--;
    }
    printf("\n");
    return 0;
}
