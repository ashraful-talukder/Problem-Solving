#include<stdio.h>

int main()
{
    double a,b,c,d;
    scanf("%lf",&a);
    if(a>=0.00 && a<=2000.00)
    {
        printf("Isento\n");
    }
    else if(a>=2000.01 && a<=3000.00)
    {
        b=(a-2000)*.08;
        printf("R$ %.2lf\n",b);
    }
    else if(a>=3000.01 && a<=4500.00)
    {
        b=1000*.08;
        c=(a-3000)*.18;
        printf("R$ %.2lf\n",b+c);
    }
    else if(a>4500.00)
    {
        b=1000*.08;
        c=1500*.18;
        d=(a-4500)*.28;
        printf("R$ %.2lf\n",b+c+d);
    }
    return 0;
}
