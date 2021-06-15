#include<stdio.h>

int main()
{
    int X,Y,i,j;
    scanf("%d %d",&X ,&Y);
    for(i=1; i<=Y; i++)
    {
        for(j=1; j<=X; j++)
        {
            if(i>Y)
            {
                printf("\n");
                return 0;
            }
            else
            {
                if(j==X)
                {
                    printf("%d",i);
                    i=++i;
                }
                else
                {
                    printf("%d ",i);
                    i=++i;
                }
            }
        }
        printf("\n");
        i=--i;
    }
    return 0;
}
