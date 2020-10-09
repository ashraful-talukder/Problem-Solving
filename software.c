#include<stdio.h>

int main()
{
    int i;
    for(i=1 ; i<=100 ; i++)
    {
        if(i%3==0)
        {
            if(i%5==0)
                printf("BanglaDesh");
            else
                printf("Bangla");

        }
        else if(i%5==0)
            printf("Desh");
        else
            printf("%d",i);
        printf("\n");
    }
    return 0;
}
