#include <stdio.h>

int main(){

    printf("\n \n \n \n \n \n\n \n \n\n \n \n");


    int x = -65;
    float y = 2.3;
    float result = (float) x  / (float) y;

    int isEven = x % 2;

    if (isEven == 0){
        printf("Par \n");
    }
    else {
        printf("Impar \n");
        x*=2;
        printf("Pero Ahora es par: %d", x);

    }

    printf("\n \n \n");



}