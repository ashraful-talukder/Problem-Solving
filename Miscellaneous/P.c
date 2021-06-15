#include<stdio.h>
int main()
{

    int tk,q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13;
    float N;
    scanf("%f",&N);
    if(N>=0 && N<=1000000.00)
    {
      tk=N*100;

    q1=tk/10000;
     tk=tk%10000;
    q2=tk/5000;
     tk=tk%5000;
    q3=tk/2000;
    tk=tk%2000;
    q4=tk/1000;
     tk=tk%1000;
    q5=tk/500;
    tk=tk%500;
    q6=tk/200;
   tk=tk%200;

    q7=tk/100;
   tk=tk%100;
    q8=tk/50;
      tk=tk%50;
    q9=tk/25;
     tk=tk%25;
    q10=tk/10;
    tk=tk%10;
    q11=tk/5;
     tk=tk%5;
    q12=tk/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",q1);
    printf("%d nota(s) de R$ 50.00\n",q2);
    printf("%d nota(s) de R$ 20.00\n",q3);
    printf("%d nota(s) de R$ 10.00\n",q4);
    printf("%d nota(s) de R$ 5.00\n",q5);
    printf("%d nota(s) de R$ 2.00\n",q6);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",q7);
    printf("%d moeda(s) de R$ 0.50\n",q8);
    printf("%d moeda(s) de R$ 0.25\n",q9);
    printf("%d moeda(s) de R$ 0.10\n",q10);
    printf("%d moeda(s) de R$ 0.05\n",q11);
    printf("%d moeda(s) de R$ 0.01\n",q12);

    }

 return 0;
}
