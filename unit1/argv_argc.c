#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
    printf("Program executed: %s", argv[0]);
    printf("Number of inputs: %i", argc - 1);
    printf("Hola %s %s %s, bienvenido!\n", argv[1], argv[2], argv[3]);
    return 0;
}