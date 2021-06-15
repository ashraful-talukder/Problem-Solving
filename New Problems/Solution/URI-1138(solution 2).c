#include<stdio.h>

int main()
{
    int a, b, i, n, p;
    while(1){
        int digits[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        scanf("%d%d",&a,&b);
        if(a == 0 && b == 0){
            break;
        }
        for(i = a ; i <= b ; i++){
            n = i;
            while(n >= 1){
                digits[n % 10]++;
                n = n / 10;
            }
        }
        for (i = 0 ; i < 10 ; i++){
                printf("%d ", digits[i]);
        }
        printf("\n");
    }
    return 0;
}
