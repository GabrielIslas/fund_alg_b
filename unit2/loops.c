#include <stdio.h>
#include "./libraries/utils.h"
#include <stdlib.h>

int main(int argc, char** argv){
    
    for(int i = 1 ; i <= 10 ; i++){
        printf("ITERATOR: %d\n", i);
        sleep(1000);
    }

    int otroIterator = 1;
    int result = 0;
    while(otroIterator <= 100){
        result += otroIterator;
        otroIterator += 1;
    }
    printf("Suma = %d\n", result);

    while(true){
        printf("Program running\n");
        sleep(1000);
        system("clear");
        break;
    }

    bool condicion;
    int i = 1;
    int cuenta = 0;
    do{
        printf("dato: %d\n", cuenta);
        cuenta += i;
        condicion = (i <= 3);
        i++;
    }
    while(condicion);

    return 0;
}