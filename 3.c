#include <stdio.h>

int main(){

    int i, z, y;
    long long int x = 2;
    i = 2;
    z = 0;
    long long int n = 600851475143 ;

    for(x = 2; x < 10000; x++){

        z = 0;

        for(i = 2; i < x ; i++){

            if(x % i == 0){

                z = 1;
                break;

            }

        }
        if(z == 0 && n % x == 0){

            while(n % x == 0){

                n = n / x;

            }

            printf("%d\n", x);

        }

    }

}
