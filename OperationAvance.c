
#include "OperationAvance.h"

int Puissance (int a, int b){

    int i=1;
    int puiss=1;

    while(i<=b){           //on effectue la multiplication de a par a b fois pour atteindre la valeur a puissance b
        puiss=puiss*a;
        i++;
    }
    return puiss;
}

