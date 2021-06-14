#include <stdio.h>

int main()
{
    int N, i, j, k, c, p, q;
    while(1){
        scanf("%d",&N);
        int arr[N][N];
        if(N == 0){
            break;
        }
        for (i = 0 ; i < N ; i++){
            c = 1, k = i;
            while(k > 0){
                c = c * 2;
                k = k - 1;
            }
            for(j = 0 ; j < N ; j++){
                arr[i][j] = c;
                c = c *2 ;
            }
        }
        p = 0;
        q = arr[N-1][N-1];
        while(q > 0){
            q = q / 10;
            ++p;
        }
        for(i = 0 ; i < N ; i++){
            for(j = 0; j < N; j++){
                if(j == N-1){
                    printf("%*d", p, arr[i][j]);
                } else{
                    printf("%*d ", p, arr[i][j]);
                }
                
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
