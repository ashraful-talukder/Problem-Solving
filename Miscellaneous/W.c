#include<stdio.h>
int main()
{
    int n,m,r,w,s;
    float p,q,i=0,j=0;
    printf("Enter the number of innings he played:");
    scanf("%d",&n);
    for(r=0; r<n; r++)
    {
        int a[r];
        printf("Enter the runs he scored on innings %d:",r+1);
        scanf("%d",&a[r]);
        i=i+a[r];
    }
    printf("Enter the number of innings he bowled:");
    scanf("%d",&m);
    for(w=0; w<m; w++)
    {
        int b[w];
        printf("Enter the runs he conceded on innings %d:",w+1);
        scanf("%d",&b[w]);
        j=j+b[w];
    }
    printf("Enter the total number of wicket he taken:");
    scanf("%d",&s);
    p=i/n;
    q=j/s;
    printf("His batting average is: %.2f\n",p);
    printf("His bowling average is: %.2f\n",q);
    if(p>q)
    {
        printf("Sakib is the great all rounder\n");
    }
    else if(q>p)
    {
        printf("Sakib is an out of form all rounder\n");
    }
    return 0;
}
