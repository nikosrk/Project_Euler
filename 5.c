#include <stdio.h>

int main(){

    int y, counter;
    long int x = 2521;

    while(x > 2520){

        for(y = 1; y <= 20; y++){

            if(x % y == 0){

                counter++;

            }

        }
            if(counter == 20){
                printf("%ld", x);
                break;
            }
            else{
                counter = 0;
            }
        x++;
    }
    return 0;

}
