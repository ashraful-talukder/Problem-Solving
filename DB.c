#include<stdio.h>

int main()
{
    int n,i,a;
    scanf("%d",&n);
    int A[n];
    for(i=0 ; i< n ; i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d",&a);
    for(i=0 ; i<n ; i++)
    {
        if(A[i]==a)
        {
            printf("Found\nposition: %d\n",++i);
            return 0;
        }

    }
    printf("Not found\n");
    return 0;
}
