#include<stdio.h>

int main()
{
    float a[6],sum=0,s;
    int i,positive=0;
    scanf("%f%f%f%f%f%f",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
    for(i=0;i<6;i++)
    {
        if(a[i]>0)
        {
            ++positive;
            sum=sum+a[i];
        }
    }
    s=sum/positive;
    printf("%d valores positivos\n%.1f\n",positive,s);
    return 0;
}
