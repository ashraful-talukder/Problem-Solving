#include<stdio.h>

int main()
{
    float a,b,c,d,m,n,r,x1,x2;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
    r=(a*d)-(c*b);
    if(r==0)
    {
        printf("Error");
    }
    else
    {
        x1=((m*d)-(b*n))/r;
        x2=((n*a)-(m*c))/r;
        printf(" x1= %.2f & x2 = %.2f",x1,x2);
    }
    return 0;
}
