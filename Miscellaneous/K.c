#include<stdio.h>

int main()
{
    char a[1000];
    int t,i,j,s;
    scanf("%d",&t);

    for(j=0; j<=t; j++)
    {
        printf("Case %d:",j);
        gets(a);
        s=strlen(a);
        for(i=0; i<=s; i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                printf("%c",a[i]-32);
            }
            else if(a[i]>='A' && a[i]<='Z')
            {
                printf("%c",a[i]);
            }
            else if(a[i]==' ')
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
