#include<stdio.h>

int main()
{
    int a,A=0,G=0,D=0;
    do
    {
        scanf("%d",&a);
        if(a==1)
        {
            ++A;
        }
        else if(a==2)
        {
            ++G;
        }
        else if(a==3)
        {
            ++D;
        }
    }while(a!=4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",A);
    printf("Gasolina: %d\n",G);
    printf("Diesel: %d\n",D);
    return 0;
}
