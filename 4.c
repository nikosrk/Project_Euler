#include <stdio.h>

int main(){

    int x, y, p, max;
    max = p = 0;


    for(x = 999; x >= 500; x--){

        for(y = 999; y >= 500; y--){

            p = x * y;

            if(p / 100000 == p % 10 && (p / 10000) % 10 == (p % 100) / 10 && (p / 1000) % 10  == (p % 1000) / 100){

                if(max < p){

                max = p;

                }

            }

        }

    }
    printf("%d", max);

    return 0;

}
