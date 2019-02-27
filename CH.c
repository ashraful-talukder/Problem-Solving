#include<stdio.h>

int main()
{
    int a,i,j,k,p;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
        {
            break;
        }
        else
        {
            for(i=0 ; i<a ; i++)
            {
                k=i+1;
                p=k;
                if(k>1)
                {
                    while(k!=1)
                    {
                        printf("%3d ",k);
                        --k;
                    }
                }
                if(p>1)
                {
                    for(j=0 ; j<a-p+1 ; j++)
                    {
                        if(j==a-p)
                        {
                            printf("%3d\n",k);
                        }
                        else
                        {
                            printf("%3d ",k);
                            ++k;
                        }
                    }
                }
                else
                {
                    for(j=0 ; j<a ; j++)
                    {
                        if(j==a-1)
                        {
                            printf("%3d\n",k);
                        }
                        else
                        {
                            printf("%3d ",k);
                            ++k;
                        }
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
