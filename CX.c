#include<stdio.h>

int main()
{
    int n,i,a,high,low,mid;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the values of the array:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the value you're searching for: ");
    scanf("%d",&a);
    high=n-1;
    low=0;
    for(i=0 ; i<n ; i++)
    {
        mid=(int) ((high+low)/2);
        if(A[mid]==a)
        {
            printf("Your value is founded in the array\n");
            return 0;
        }
        else if(A[mid]>a)
        {
            high=mid-1;
        }
        else if(A[mid]<a)
        {
            low=mid+1;
        }
        if(low>high)
        {
            printf("Your value is not in the array.\n");
            return 0;
        }
    }
    return 0;
}

