#include <stdio.h>

int gcd(int a, int b){
    if(a>b){
        if(a%b == 0){
            return b;
        }
        return gcd(b, a%b);
    } else{
        if(b%a == 0){
            return a;
        }
        return gcd(a, b%a);
    }
}
 
int main() {
    int n, f1, f2, i;
 
   scanf("%d",&n);
   int a[n];
   for(i = 0; i < n ; i++){
       scanf("%d %d", &f1, &f2);
       a[i] = gcd(f1, f2);
   }
   for(i = 0; i < n ; i++){
       printf("%d\n",a[i]);
   }
 
    return 0;
}