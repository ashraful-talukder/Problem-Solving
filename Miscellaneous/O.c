#include<stdio.h>

int main()
{
    int N,hundred=0,fifty=0,twenty=0,ten=0,five=0,two=0,one=0;
    scanf("%d",&N);
    while(N>0 && N<1000000)
    {
        if(N>99)
        {
            ++hundred;
            N=N-100;
        }
        else if(N>49)
        {
            ++fifty;
            N=N-50;
        }
        else if(N>19)
        {
            ++twenty;
            N=N-20;
        }
        else if(N>9)
        {
            ++ten;
            N=N-10;
        }
        else if(N>4)
        {
            ++five;
            N=N-5;
        }
        else if(N>1)
        {
            ++two;
            N=N-2;
        }
        else if(N>0)
        {
            ++one;
            N=N-1;
        }
    }
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n%d nota(s) de R$ 1.00\n",hundred,fifty,twenty,ten,five,two,one);
    return 0;
}
