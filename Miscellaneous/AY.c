#include<stdio.h>

int main()
{
    double N1,N2,N3,N4,b,c,n,r;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    b=(N1*2)+(N2*3)+(N3*4)+N4;
    c=b/10;
    printf("Media: %.1lf\n",c);
    if(c>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(c<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&n);
        printf("Nota do exame: %.1f\n",n);
        r=(n+c)/2;
        if(r>5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",r);
    }
    return 0;
}
