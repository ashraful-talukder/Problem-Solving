#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int year, dif;
        scanf("%d", &dif);
        if(dif<2015)
        {
            year = 2015 - dif;
            printf("%d D.C.\n", year);
        }
        else
        {
            year = dif - 2014;
            printf("%d A.C.\n", year);
        }
    }
    return 0;
}
