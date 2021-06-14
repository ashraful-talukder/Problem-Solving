#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, s, p, x, y, z;
    while(1){
        a = 0, b = 0, c = 0, d = 0, e = 0;
        f = 0, g = 0, h = 0, i = 0, j = 0;
        scanf("%d %d", &x, &y);
        if(x == 0 && y == 0){
            break;
        }
        for(s = x; s <= y; s++){
            p = s;
            while(p>0){
                z = p % 10;
                p = p / 10;
                if (z == 0){
                    ++a;
                } else if (z == 1){
                    ++b;
                } else if (z == 2){
                    ++c;
                } else if (z == 3){
                    ++d;
                } else if (z == 4){
                    ++e;
                } else if (z == 5){
                    ++f;
                } else if (z == 6){
                    ++g;
                } else if (z == 7){
                    ++h;
                } else if (z == 8){
                    ++i;
                } else {
                    ++j;
                }
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j);
    }

    return 0;
}
