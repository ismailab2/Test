
#include <stdio.h>
#include "OperationDeBase.h"
#include "OperationAvance.h"



int main(int argc, char const *argv[])
{
    printf("Bienvenu\n");

    int a, b;
    
    printf("Saissisez deux valeurs s'il vous plait :\n");
    printf("La premier valeur est : ");
    scanf("%d", &a);
    printf("La deuxieme valeur est :");
    scanf("%d", &b);

    printf("---------------------------- Les opérations de bases -----------------------------\n");
    printf("La somme de %d et de %d est egal à : %d\n", a, b, somme(a,b));
    printf("La difference de %d et de %d est egal à : %d\n", a, b, difference(a,b));
    printf("La produit de %d et de %d est egal à : %d\n", a, b, produit(a,b));
    printf("La divisionEntier de %d et de %d est egal à : %d\n", a, b, divisionEntier(a,b));

    printf("---------------------------- Les opérations avanées -----------------------------\n");
    printf("La puisance de %d par %d est egal à : %d\n", a, b, Puissance(a,b));

    return 0;
}
