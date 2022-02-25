#include <stdio.h>
#include "./libraries/utils.h"

int main(int argc, char** argv){
    for(int i = 1 ; i <= 10 ; i++){
        printf("ITERATOR: %d\n", i);
        sleep(1000);
    }
    return 0;
}