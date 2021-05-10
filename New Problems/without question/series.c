#include <stdio.h>

int main()
{
    int i = 0;
    double a = 1,b = 2, c;
    double sum = a/b;
    while(i<1000000){
        ++a;
        ++b;
        c = a/b;
        if(i%2 == 1){
            sum = sum + c;
        } else{
            sum = sum - c;
        }
        ++i;
    }
    
    printf("%lf",sum);
    return 0;
}