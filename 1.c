#include <stdio.h>
#define N 1000

int main(){

    int sum, i;

    for(i = 0; i < N; i++ ) {

        if(i % 3 == 0 || i % 5 == 0){

            sum += i;

        }

    }
    printf ("The sum is: %d",sum);

    return 0;






}
