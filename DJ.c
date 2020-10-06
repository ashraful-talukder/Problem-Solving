#include<stdio.h>

int main()
{
    char s[1000];
    printf("Enter your string: ");
    gets(s);
    int c,i;
    c=strlen(s);
    for(i=0 ; i<c ; i++)
    {
        if(s[i]==' ' || s[i]=='.' || s[i]==',')
        {
            printf("\n");
            continue;
        }
        else{
            printf("%c",s[i]);
        }
    }
    return 0;
}
