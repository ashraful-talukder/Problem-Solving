#include<stdio.h>
int main()
{
    int a,b,x,y,z,r,gcd,lcm;
    scanf("%d %d",&x,&y);

    z=x;
    if(z<y)
    {
        z=y;
        y=x;
        x=z;
    }
    a=x;
    b=y;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    gcd=a;
    printf("GCD of two number is %d\n",gcd);
    lcm=(x*y)/gcd;
    printf("LCM of two number is %d\n",lcm);

    return 0;
}
