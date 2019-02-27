#include<stdio.h>
#include<math.h>
float F(float x)
{
    return x*x-4*x-10;

}

int main()
{
    float a,b,x;
    int k=0;

    printf("Enter the value of a and b:\n");
    scanf("%f %f",&a,&b);

    do{
            x=(a+b)/2;
            ++k;
            if(F(a)*F(x)<0)//f(a)<0
            {   b=x;
                printf("\nValue of a and b in %d iteration is %f and %f",k,a,b);
            }
            else
            {
                a=x;
                printf("\nValue of a and b in %d iteration is %f and %f",k,a,b);
            }
    }while(fabs(a-b)>0.001);

    printf("\nRoot is %0.4f\n ",x);

    return 0;

}
