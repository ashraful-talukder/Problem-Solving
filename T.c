#include<stdio.h>

int main()
{
    double c;
    int N,hundred=0,fifty=0,twenty=0,ten=0,five=0,two=0,one=0,pfifty=0,ptfive=0,pten=0,pfive=0,pone=0;
    scanf("%lf",&c);
    c=c*100;
    N=(int)c;
    while(N!=0)
    {
        if(N>9999)
        {
            ++hundred;
            N=N-10000;
        }
        else if(N>4999)
        {
            ++fifty;
            N=N-5000;
        }
        else if(N>1999)
        {
            ++twenty;
            N=N-2000;
        }
        else if(N>999)
        {
            ++ten;
            N=N-1000;
        }
        else if(N>499)
        {
            ++five;
            N=N-500;
        }
        else if(N>199)
        {
            ++two;
            N=N-200;
        }
        else if(N>99)
        {
            ++one;
            N=N-100;
        }
        else if(N>49)
        {
            ++pfifty;
            N=N-50;
        }
        else if(N>24)
        {
            ++ptfive;
            N=N-25;
        }
        else if(N>9)
        {
            ++pten;
            N=N-10;
        }
        else if(N>4)
        {
            ++pfive;
            N=N-5;
        }
        else if(N>=1)
        {
            ++pone;
            N=N-1;
        }
    }
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",hundred,fifty,twenty,ten,five,two);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",one,pfifty,ptfive,pten,pfive,pone);
    return 0;
}
