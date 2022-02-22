#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){
    if(argc != 2){
        printf("Input one integer when executing the program\n");
        return 0;
    } 

    int isANumber = argv[1][0] >= 48 && argv[1][0] <= 57;

    if(!isANumber){
        printf("The input isn't a number \n");
        return 0;
    }

    int numberInput = atoi(argv[1]);

    if(numberInput % 2 == 0){
        printf("The number %d is even\n", numberInput);
    }
    else{
        printf("The number %d is odd\n", numberInput);
    }
}