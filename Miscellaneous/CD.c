#include<stdio.h>

int main()
{
    int par[5],impar[5],i,j=0,k=0,s,a;
    for(i=0; i<15 ; i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            par[j]=a;
            ++j;
            if(j==5)
            {
                for(j=0 ; j<5 ; j++)
                {
                    printf("par[%d] = %d\n",j,par[j]);
                }
                j=0;
            }
        }
        else
        {
            impar[k]=a;
            ++k;
            if(k==5)
            {
                for(k=0; k<5 ; k++)
                {
                    printf("impar[%d] = %d\n",k,impar[k]);
                }
                k=0;
            }
        }
    }
    for(s=0 ; s<k ; s++)
    {
        printf("impar[%d] = %d\n",s,impar[s]);
    }
    for(s=0 ; s<j ; s++)
    {
        printf("par[%d] = %d\n",s,par[s]);
    }
    return 0;
}
