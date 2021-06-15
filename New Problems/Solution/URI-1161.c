#include<stdio.h>

long long fact(int n){
    if (n < 1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    long long a, b, M, N;
    while(scanf("%d%d",&M, &N)!=EOF){
        a = fact(M);
        b = fact(N);
        printf("%llu\n", a+b);
    }
    return 0;
}
