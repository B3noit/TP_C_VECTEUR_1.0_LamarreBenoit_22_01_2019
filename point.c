#include "point.h"



/*-----------------------------------
 Descriptions : Initialise une variable de type tPoint
 Entrées : tPoint, 2 ints
 Sorties : tPoint initialisé
-----------------------------------*/

void initPoint(tPoint *coord,const int nNb1,const int nNb2,const int nNb3)
{
    (*coord).nX=nNb1;
    (*coord).nY=nNb2;
    (*coord).nZ=nNb3;
}


/*-----------------------------------
 Descriptions : Initialise une la variable nx d'un type tPoint
 Entrées : tPoint, 1 int
 Sorties : tPoint.nX initialisé
-----------------------------------*/

void setX(tPoint *coord, const int nNb1)
{
    (*coord).nX=nNb1;
}



/*-----------------------------------
 Descriptions : Initialise une la variable ny d'un type tPoint
 Entrées : tPoint, 1 int
 Sorties : tPoint.nY initialisé
-----------------------------------*/

void setY(tPoint *coord, const int nNb1)
{
    (*coord).nY=nNb1;
}


/*-----------------------------------
 Descriptions : Initialise une la variable ny d'un type tPoint
 Entrées : tPoint, 1 int
 Sorties : tPoint.nZ initialisé
-----------------------------------*/

void setZ(tPoint *coord, const int nNb1)
{
    (*coord).nZ=nNb1;
}




/*-----------------------------------
 Descriptions : Accède une la variable nx d'un type tPoint
 Entrées : tPoint
 Sorties : tPoint.nx
-----------------------------------*/

int getX(const tPoint tPoint)
{
    return tPoint.nX;
}



/*-----------------------------------
 Descriptions : Accède une la variable ny d'un type tPoint
 Entrées : tPoint
 Sorties : tPoint.n
-----------------------------------*/

int getY(const tPoint tPoint)
{
    return tPoint.nY;
}


/*-----------------------------------
 Descriptions : Accède une la variable ny d'un type tPoint
 Entrées : tPoint
 Sorties : tPoint.n
-----------------------------------*/

int getZ(const tPoint tPoint)
{
    return tPoint.nZ;
}
