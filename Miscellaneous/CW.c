#include<stdio.h>

int main()
{
    int n,a,i,s=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the values of array:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the value you're searching in the array: ");
    scanf("%d",&a);
    for(i=0 ; i<n ; i++)
    {
        if(A[i]==a)
        {
            printf("Your value is found at position %d\n",s+1);
            return 0;
        }
        ++s;
    }
    printf("Your value is not in the array\n");
    return 0;
}
