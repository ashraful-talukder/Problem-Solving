#include<stdio.h>

int main()
{
    float a,b,c,sum;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    sum=a+b;
    printf("\n\npress 1 for sum those numbers\npress 2 for show those numbers\nEnter your selection:");
    scanf("%f",&c);
    if(c==1)
    {
        printf("\nThe sum of your given numbers is %f\n",sum);
    }
    else if(c==2)
    {
        printf("\nYou entered %f and %f\n",a,b);
    }
    else
    {
        printf("\nYou enter a wrong choice\n");
    }
    return 0;
}
