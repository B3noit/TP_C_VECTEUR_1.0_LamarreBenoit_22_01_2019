#include "vecteur.h"


void creatVecteur (tVecteur *tVecteur,const tPoint tCoord1,const tPoint tCoord2)
{
    (*tVecteur).nX = tCoord2.nX-tCoord1.nX;
    (*tVecteur).nY = tCoord2.nY-tCoord1.nY;
    (*tVecteur).nZ = tCoord2.nZ-tCoord1.nZ;
}



tVecteur addVecteur(const tVecteur tVecteur1,const tVecteur tVecteur2)
{
//VAR
tVecteur tVectempo;

    tVectempo.nX = tVecteur1.nX + tVecteur2.nX;
    tVectempo.nY = tVecteur1.nY + tVecteur2.nY;
    tVectempo.nZ = tVecteur1.nZ + tVecteur2.nZ;

    return tVectempo;
}


tVecteur sousVecteur(const tVecteur tVecteur1,const tVecteur tVecteur2)
{
//VAR
tVecteur tVectempo;

    tVectempo.nX = tVecteur1.nX - tVecteur2.nX;
    tVectempo.nY = tVecteur1.nY - tVecteur2.nY;
    tVectempo.nZ = tVecteur1.nZ - tVecteur2.nZ;

    return tVectempo;
}


tVecteur factoVecteur(const tVecteur tVecteur1,const int nNb1)
{
//VAR
tVecteur tVectempo;

    tVectempo.nX = tVecteur1.nX * nNb1;
    tVectempo.nY = tVecteur1.nY * nNb1;
    tVectempo.nZ = tVecteur1.nZ * nNb1;

    return tVectempo;
}



 int prodScal(const tVecteur tVecteur1, const tVecteur tVecteur2)
{
    return (tVecteur1.nX * tVecteur2.nX + tVecteur1.nY * tVecteur2.nY + tVecteur1.nZ * tVecteur2.nZ);
}


tVecteur prodVect(const tVecteur tVecteur1,const tVecteur tVecteur2)
{
//VAR
tVecteur tVectempo;

    tVectempo.nX = tVecteur1.nY * tVecteur2.nZ - tVecteur1.nZ * tVecteur2.nY;
    tVectempo.nY = tVecteur1.nZ * tVecteur2.nX - tVecteur1.nX * tVecteur2.nZ;
    tVectempo.nZ = tVecteur1.nX * tVecteur2.nY - tVecteur1.nY * tVecteur2.nX;

    return tVectempo;
}

