#include<stdio.h>

int main()
{
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i-j==0 || i-j==2 || j-i==2)
            {
                printf("%d\t",a[i][j]);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
    return 0;
}

