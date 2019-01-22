#ifndef VECTEUR_H_INCLUDED
#define VECTEUR_H_INCLUDED
#include "point.h"

//TYPES
typedef struct tVecteur
{
    int nX;
    int nY;
    int nZ;
}tVecteur;

//PROTOTYPES
extern void creatVecteur (tVecteur *tVecteur,const tPoint tCoord1,const tPoint tCoord2);
extern tVecteur addVecteur(const tVecteur tVecteur1,const tVecteur tVecteur2);
extern tVecteur sousVecteur(const tVecteur tVecteur1,const tVecteur tVecteur2);
extern tVecteur factoVecteur(const tVecteur tVecteur1,const int nNb1);
extern int prodScal(const tVecteur tVecteur1, const tVecteur tVecteur2);
extern tVecteur prodVect(const tVecteur tVecteur1,const tVecteur tVecteur2);




#endif // VECTEUR_H_INCLUDED
