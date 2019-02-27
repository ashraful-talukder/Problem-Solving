#include<stdio.h>

int main()
{
    double a,b;
    scanf("%lf",&a);
    if(a>=0 && a<=400.00)
    {
        b=a*.15;
        printf("Novo salario: %.2lf\n",b+a);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 15 %c\n",37);
    }
    else if(a>=400.01 && a<=800.00)
    {
        b=a*.12;
        printf("Novo salario: %.2lf\n",b+a);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 12 %c\n",37);
    }
    else if(a>=800.01 && a<=1200.00)
    {
        b=a*.10;
        printf("Novo salario: %.2lf\n",b+a);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 10 %c\n",37);
    }
    else if(a>=1200.01 && a<=2000.00)
    {
        b=a*.07;
        printf("Novo salario: %.2lf\n",b+a);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 7 %c\n",37);
    }
    else if(a>2000)
    {
        b=a*.04;
        printf("Novo salario: %.2lf\n",b+a);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 4 %c\n",37);
    }
    return 0;
}
