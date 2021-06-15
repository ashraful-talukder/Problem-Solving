#include<stdio.h>

int main()
{
    int a,i,j,k=0;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
        {
            break;
        }
        else
        {
            for(i=0; i<a ; i++)
            {
                k=k+i;
                for(j=0 ; j<a ; j++)
                {
                    if(j==a-1)
                    {
                        printf("%(%a)d\n",a,k);
                    }
                    else
                    {
                        printf("%(%a)d ",a,k);
                        ++k;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
