#include<stdio.h>

int main()
{
    float I=0,J=1,K,L,M;
    int i;
    for(i=0; i<11; i++)
    {
        if(I==0 || I==1 || I==2)
        {
            K=I+J;
            printf("I=%.0f J=%.0f\n",I,K);
            L=K+1;
            printf("I=%.0f J=%.0f\n",I,L);
            M=L+1;
            printf("I=%.0f J=%.0f\n",I,M);
        }
        else if(i==10)
        {
            K=I+J;
            printf("I=%.0f J=%.0f\n",I,K);
            L=K+1;
            printf("I=%.0f J=%.0f\n",I,L);
            M=L+1;
            printf("I=%.0f J=%.0f\n",I,M);
        }
        else
        {
            K=I+J;
            printf("I=%.1f J=%.1f\n",I,K);
            L=K+1;
            printf("I=%.1f J=%.1f\n",I,L);
            M=L+1;
            printf("I=%.1f J=%.1f\n",I,M);
        }
        I=I+0.2;
    }
    return 0;
}
