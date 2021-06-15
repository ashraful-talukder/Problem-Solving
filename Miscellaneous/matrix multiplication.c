#include <stdio.h>

int main()
{
    int m, n, p, q;
    printf("Enter the number of row of the first matrix: ");
    scanf("%d",&m);
    printf("Enter the number of column of the first matrix: ");
    scanf("%d",&n);
    printf("Enter the number of row of the second matrix: ");
    scanf("%d",&p);
    printf("Enter the number of row of the first matrix: ");
    scanf("%d",&q);
    if(n!=p){
        printf("You matrices cant be multiplied!");
        return 0;
    }
    
    int f[m][n], s[p][q], r[m][q]; 
    printf("Enter your first matrices:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n ; j++){
            scanf("%d",&f[i][j]);
        }
    }
    
    printf("Enter your second matrices:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n ; j++){
            scanf("%d",&s[i][j]);
        }
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < q ; j++){
            r[i][j] = 0;
        }
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < q ; j++){
            for(int k = 0 ; k < p ; k++){
                r[i][j] = r[i][j] + (f[i][k] * s[j][k]);
            }
        }
    }
    
    printf("The result of multiplied two matrices is:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < q ; j++){
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }

    return 0;
}
