#include <stdio.h>

int getNum(){
    int num;
    scanf("%d",&num);
    return num;
}

void display(int num){
    int c , sum=0, result;
    while(num>0){
        c = num%10;
        printf("%d\n",c);
        num = num/10;
        sum = sum + c;
    }
    result = sum%9;
    if (result == 0){
        printf("The number is divisible by 9");
    } else{
        printf("The number is not divisible by 9");
    }
}

int main()
{
    int a = getNum();
    display(a);
    return 0;
}