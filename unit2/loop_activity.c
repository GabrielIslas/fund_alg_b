#include <stdio.h>

#include "./libraries/utils.h"

int main(int argc, char**argv){
    if(argc != 3){
        printf("To execute the program correctly, write 2 numbers");
        return 0;
    }

    int evenAmount = atoi(argv[1]);
    int oddAmount = atoi(argv[2]);

    printf("Even iteration\n");
    for(int i = 0; i <= evenAmount; i += 2){
        printf("The number %d is even\n", i);
    }

    printf("\nOdd iteration\n");
    for(int i = 1; i <= oddAmount; i += 2){
        printf("The number %d is odd\n", i);
    }
    return 0;
}