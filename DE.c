#include<stdio.h>

int Quicksort(int A[], int p , int r)
{
    int q;
    if(p<r)
    {
        q=partition(A,p,r);
        Quicksort(A,p,q-1);
        Quicksort(A,q+1,r);
    }
}

int partition(int A[], int p, int r)
{
    int x,i,j,temp;
    x=A[r];
    i=p-1;
    for(j=p ; j<r ; j++)
    {
        if(A[j]<=x)
        {
            i=i+1;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    temp=A[i+1];
    A[i+1]=A[r];
    A[r]=temp;
    return i+1;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&A[i]);
    }
    Quicksort(A,0,n);
    for(i=0 ; i<n ; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
