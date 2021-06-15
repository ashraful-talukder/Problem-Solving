#include<stdio.h>

int fun1(int c,int d)
{
    int r=c+d;
    printf("The sum of your given number is: %d\n",r);
}

int main()
{
    int a,b,i,n;
    printf("Enter the test case: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        fun1(a,b);
    }
    return 0;
}
