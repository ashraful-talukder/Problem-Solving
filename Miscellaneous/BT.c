#include<stdio.h>

int main()
{
    int A,N,i,J=0;
    scanf("%d",&A);
    do
    {
        scanf("%d",&N);
    }while(N<1);
    for(i=0;i<N;i++)
    {
        J=J+i+A;
    }
    printf("%d\n",J);
    return 0;
}
