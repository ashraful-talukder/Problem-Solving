#include<stdio.h>
int main()
{
    long long int n,sum=0,rem;
    scanf("%lld",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("The sum of the digits is %d\n",sum);
    return 0;
}
