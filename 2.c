#include<stdio.h>

int main()
{
    int i,j,count=0;
    char s[1000];
    printf("Enter your string: ");
    gets(s);
    j=strlen(s);
    if(j>0)
    {
        count++;
    }
    for(i=0 ; i<j-1 ; i++)
    {
        if(s[i]==' ' || s[i]=='.' || s[i]==',')
        {
            count++;
        }
    }
    printf("Total number of words: %d\n",count);
    return 0;
}
