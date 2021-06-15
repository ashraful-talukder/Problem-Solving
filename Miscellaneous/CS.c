#include<stdio.h>

int main()
{
    int a,i,c,j;
    char b[20];
    printf("Enter the amount of the student(s):");
    scanf("%d",&a);
    for(i=0 ; i<a ; i++)
    {
        int d=0;
        printf("\nEnter the student's id:");
        scanf("%s",b);
        printf("Enter the numbers of five subject:\n");
        for(j=0 ; j<5 ; j++)
        {
            printf("Subject-%d: ",j+1);
            scanf("%d",&c);
            if(c>20)
            {
                printf("You entered a wrong input\n");
                break;
            }
            else
            {
                d=d+c;
            }
        }
        if(j==5)
        {
            printf("\n");
            if(d>=80)
            {
                printf("ID: %s\nResult: A+\n",b);
            }
            else if(d>=75 && d<80)
            {
                printf("ID: %s\nResult: A\n",b);
            }
            else if(d>=70 && d<75)
            {
                printf("ID: %s\nResult: A-\n",b);
            }
            else if(d>=65 && d<70)
            {
                printf("ID: %s\nResult: B+\n",b);
            }
            else if(d>=60 && d<65)
            {
                printf("ID: %s\nResult: B\n",b);
            }
            else if(d>=55 && d<60)
            {
                printf("ID: %s\nResult: B-\n",b);
            }
            else if(d>=50 && d<55)
            {
                printf("ID: %s\nResult: C+\n",b);
            }
            else if(d>=45 && d<50)
            {
                printf("ID: %s\nResult: C\n",b);
            }
            else if(d>=40 && d<45)
            {
                printf("ID: %s\nResult: D\n",b);
            }
            else if(d<40)
            {
                printf("ID: %s\nResult: Failed\n",b);
            }
        }
        else
        {
            printf("\nResult can't be shown because your entry was not full filled\n");
            continue;
        }
    }
    return 0;
}
