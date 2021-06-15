#include<stdio.h>

int fun(int n){
    while(n<2){
        return 1;
    }
    return n+fun(n-2);
}

int main(){
    int x;
    printf("Enter the last value of the series: ");
    scanf("%d",&x);
    if(x%2==0){
        x = x-1;
    }
    int result = fun(x);
    printf("Result: %d",result);
    return 0;
}