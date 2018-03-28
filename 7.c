#include <stdio.h>

int main(){

    int y, counter, x, i;
    x = 2;
    i = 0;

    while(x < 1000000){

        counter = 0;

        for(y = 2; y < x; y++){

            if(x % y == 0){

                counter = 1;
                break ;

            }

        }
        if(counter == 0){

            i++;

            if(i == 10001){

            printf("%d\n", x);

            }

        }

        x++;

    }

    return 0;

}
