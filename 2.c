#include <stdio.h>

int main(){

    int x, y, sum, i;
    x = 1;
    y = 2;
    sum = i = 0;

    while(y < 4000000){

        sum = x + y;

        if(sum % 2 == 0){

            i += sum;

        }
        x = y;
        y = sum;

}
printf("%d", (i+2));



}
