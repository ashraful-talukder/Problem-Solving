#include <stdio.h>

int main()
{
    int x, y, z, a, i, b;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z){
        a = x;
    } else if(y>x && y>z){
        a = y;
    } else if(z>x && z>y){
        a = z;
    } else if(x==y){
        a = x;
    } else if(x==z){
        a = x;
    } else if(y==z){
        a = y;
    }
    
    b = a;
    
    for(i=0; i<b; i++){
        if(x>=a){
            printf("*");
        } else{
            printf(" ");
        }
        
        if(y>=a){
            printf("*");
        } else{
            printf(" ");
        }
        
        if(z>=a){
            printf("*");
        } else{
            printf(" ");
        }
        printf("\n");
        --a;
    }

    return 0;
}
