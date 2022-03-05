#include <stdio.h>

#include "./libraries/utils.h"

int main(int argc, char**argv){
    if(argc != 3){
        printf("To execute the program correctly, write 2 number\n");
        return 0;
    }

    int evenAmount = atoi(argv[1]);
    int oddAmount = atoi(argv[2]);

    printf("Even iteration\n");
    for(int i = 1; i <= evenAmount; i ++){
        if(i % 2 == 0){
            printf("The number %d is even\n", i);
        }
    }

    printf("\nOdd iteration\n");
    int i = 1;
    while(i <= oddAmount){
        if(i % 2 != 0){
            printf("The number %d is odd\n", i);
        }
        i++;
    }
    return 0;
}