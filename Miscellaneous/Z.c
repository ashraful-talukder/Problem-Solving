#include<stdio.h>

int main()
{
    int a,b,hundred=0,fifty=0,twenty=0,ten=0,five=0,two=0,one=0;
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        if(a>99)
        {
            ++hundred;
            a=a-100;
        }
        else if(a>49)
        {
            ++fifty;
            a=a-50;
        }
        else if(a>19)
        {
            ++twenty;
            a=a-20;
        }
        else if(a>9)
        {
            ++ten;
            a=a-10;
        }
        else if(a>4)
        {
            ++five;
            a=a-5;
        }
        else if(a>1)
        {
            ++two;
            a=a-2;
        }
        else if(a<2)
        {
            ++one;
            a=a-1;
        }
    }
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",b,hundred,fifty,twenty,ten,five,two,one);
    return 0;
}
