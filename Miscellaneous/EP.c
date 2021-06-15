#include<stdio.h>

int sum(int *f,int r)
{
    int i,sum;
    for(i=0;i<r;i++)
    {
        sum=sum+f[i];
    }
    return sum;
}
int avg(int s,int q)
{
    int avg;
    avg=s/q;
    return avg;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int j,s;
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    s=sum(a,n);
    int p;
    p=avg(s,n);
    printf("Sum is %d\nAverage is %d",s,p);
    return 0;
}
