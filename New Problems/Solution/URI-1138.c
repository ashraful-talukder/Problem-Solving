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
            while(p >= 1){
                z = p % 10;
                p = p / 10;
                switch(z){
                case 0:
                    ++a;
                    break;
                case 1:
                    ++b;
                    break;
                case 2:
                    ++c;
                    break;
                case 3:
                    ++d;
                    break;
                case 4:
                    ++e;
                    break;
                case 5:
                    ++f;
                    break;
                case 6:
                    ++g;
                    break;
                case 7:
                    ++h;
                    break;
                case 8:
                    ++i;
                    break;
                case 9:
                    ++j;
                    break;
                }

            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j);
    }

    return 0;
}
