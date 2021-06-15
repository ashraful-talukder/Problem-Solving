#include<stdio.h>
int main()
{
    int I,j,k;
    for(I=1; I<=4; I++)
    {
        for(j=4; j>=1; j--)
        {
            if(j<=I)
                printf("#");
            else
                printf(" ");
        }
        printf("    ");
        for(k=1; k>=I; k++)
        {
            printf("#");
        }
        printf("/n");
    }
}
