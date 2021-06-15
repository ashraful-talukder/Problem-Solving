#include<stdio.h>

int main()
{
    int i,j,n;
    char s[1000];
    printf("Enter your string: ");
    gets(s);
    n=strlen(s);
    for(i=0 ; i<n ; i++)
    {
        if(s[i]>='a' && s[i]<'z' || s[i]>='A' && s[i]<'Z')
        {
            j=(int)s[i];
            j++;
            s[i]=(char)j;
        }
        else if(s[i]=='z')
        {
            s[i]='a';
        }
        else if(s[i]=='Z')
        {
            s[i]='A';
        }
    }
    puts(s);
    return 0;
}
