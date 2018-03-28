#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c, csqrt, i;
    c = csqrt = 0;

    for(a = 1; a <= 1000 / 3; a++){

        for(b = a + 1; b <= 1000 / 2; b++){

            csqrt = (a * a) + (b * b);
            for(i = 1; i < 1000; i++){

                c = i * i;
                if(c == csqrt){

                    break;

                }

            }

            if(i > a && i > b && a + b + i == 1000){

                printf("%d\t%d\t%d\n", a, b, i);

            }


        }

    }



}
