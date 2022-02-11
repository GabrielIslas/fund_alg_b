#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//temperatura con condiciones
//frio: 16
//caliente: 29
int frio = 16;
int caliente = 29;
int sofa = 1000;


int main(int argc, char** argv){
    int inputTemp = atoi(argv[1]);
    int inputMoney = atoi(argv[2]);
    char inputName = argv[3][0];
    bool tempCondition1 = (inputTemp == frio);
    bool tempCondition2 = (inputTemp == caliente);
    bool tempCondition3 = (inputTemp >= caliente);
    bool isAbleToWalk = (inputTemp <= caliente);
    bool hasUserMoney = (inputMoney >= sofa);
    bool isUserMale = (inputName != 'F');

    if(isAbleToWalk){
        //Robot.move(x_coord, y_coord);
    }
    else{
        //Robot.stop(x_coord, y_coord);
    }

    if(hasUserMoney){
        //allows to buy
    }
    else{
        //rejected product
    }

    return 0;
}