#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter The Size Of Array\n");
    scanf("%d",&n);
    int A[n];

    printf("Enter The Array Elements\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&A[i]);
    }
    quicksort(A,0,n);
    printf("After Sorted\n");
    for(i=0;i<n;i++)
    {
    printf("%d ",A[i]);
    }

}
void quicksort(int A[],int low,int high)
{
    int pi;
    if(low<high)
    {
    pi=partion(A,low,high);
    quicksort(A,low,pi-1);
    quicksort(A,pi+1,high);

    }

}
int partion(int A[],int low,int high)

{
    int pivot,i,temp,j;
    pivot=A[high];
    i=(low-1);
    for(j=low;j<=high-1;j++)
    {
        if(A[j]<=pivot)
        {
            i++;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }

    }
            temp=A[i+1];
            A[i+1]=A[high];
            A[high]=temp;
            return (i+1);


}
