#include <stdio.h>

int main(){

    int x, y, i, z, n;
    i = y = z = n =0;

    for(x = 1; x <= 100; x++){

        y = x * x;
        i = i + y;
        z = z + x;

    }
    n = z * z;
    printf("%d", n - i);

}
