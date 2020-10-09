#include<stdio.h>

int main()
{
    int i;
    char s[]="education";
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='n' || s[i]=='e')
        {
            printf("_");
            continue;
        }
        else if(s[i]=='o')
        {
            break;
        }
        printf("%c",s[i]);
    }
    return 0;
}
