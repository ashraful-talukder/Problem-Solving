#include<stdio.h>

int main()
{
    float a,b,z;
    int p;
    do
    {
        do
        {
            scanf("%f",&a);
            if(a<0 || a>10)
            {
                printf("nota invalida\n");
            }
        }
        while(a<0 || a>10);
        do
        {
            scanf("%f",&b);
            if(b<0 || b>10)
            {
                printf("nota invalida\n");
            }
        }
        while(b<0 || b>10);
        z=(a+b)/2;
        printf("media = %.2f\n",z);
        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&p);
            if(p==2)
            {
                return 0;
            }
        }
        while(p!=1);
    }
    while(p==1);
    return 0;
}
