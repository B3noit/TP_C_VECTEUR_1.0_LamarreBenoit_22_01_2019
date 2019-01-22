#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include "vecteur.h"

int main()
{
//VAR
tPoint coord1;
tPoint coord2;
tPoint coord3;
tPoint coord4;
tVecteur tVecteur1;
tVecteur tVecteur2;

    initPoint(&coord1, 5, 9, 0);
    initPoint(&coord2, 2, 3, 0);
    initPoint(&coord3, 1, 7, 0);
    initPoint(&coord4, 1, 3, 0);


    printf("X de coord1 : %d\nY de coord1 : %d\nZ de coord1 : %d\n", getX(coord1), getY(coord1), getZ(coord1));
    printf("X de coord2 : %d\nY de coord2 : %d\nZ de coord2 : %d\n", getX(coord2), getY(coord2), getZ(coord2));
    printf("X de coord3 : %d\nY de coord3 : %d\nZ de coord3 : %d\n", getX(coord3), getY(coord3), getZ(coord3));
    printf("X de coord4 : %d\nY de coord4 : %d\nZ de coord4 : %d\n", getX(coord4), getY(coord4), getZ(coord4));

    creatVecteur(&tVecteur1,coord1,coord2);
    creatVecteur(&tVecteur2,coord3,coord4);

    printf("X de vecteur1 : %d\nY de vecteur1 : %d\nZ de vecteur1 : %d\n", tVecteur1.nX, tVecteur1.nY, tVecteur1.nZ);
    printf("X de vecteur2 : %d\nY de vecteur2 : %d\nZ de vecteur2 : %d\n", tVecteur2.nX, tVecteur2.nY, tVecteur2.nZ);

    return 0;
}
