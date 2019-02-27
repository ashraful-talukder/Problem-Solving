#include<stdio.h>

int main()
{
    int n,i,a,high,low,mid;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&a);
    low=0;
    high= n-1;
    for(i=0 ; i<n ; i++)
    {
        mid= (int) ((low+high)/2);
        if(a==A[mid])
        {
            printf("Found\nposition: %d",mid+1);
            return 0;
        }
        else if(a>A[mid])
        {
            low=mid+1;
        }
        else if(a<A[mid])
        {
            high=mid-1;
        }
        if(low>high)
        {
            printf("Not found\n");
            return 0;
        }
    }
    return 0;
}

