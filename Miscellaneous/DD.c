#include<stdio.h>

int main()
{
    int n,i,key,j;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=1 ; i<n ; i++)
    {
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=key;
    }
    for(i=0 ; i<n ; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}

