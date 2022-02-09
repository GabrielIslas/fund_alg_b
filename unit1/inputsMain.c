#include <stdio.h>
#include <stdlib.h>

//Global variables
char* date = "02-02-22T10:25:00z";

int main(){
    /* int: %d-%i, float: %f, char: %c, string: %s, pointer: %p */
    date = "02-03-22T10:25:00z";
    int hours = 22;
    hours = hours + 2;
    float pi = 3.1416;
    char character = 'c';
    char* name = "Gabriel";
    int* address = &hours;
    printf("hours: %i\n", hours);
    int a = 0;
    scanf("%d", &a);
    return 0;
}