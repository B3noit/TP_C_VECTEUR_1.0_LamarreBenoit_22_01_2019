#include "point.h"



/*-----------------------------------
 Descriptions : Initialise une variable de type tPoint
 Entr�es : tPoint, 2 ints
 Sorties : tPoint initialis�
-----------------------------------*/

void initPoint(tPoint *coord,const int nNb1,const int nNb2,const int nNb3)
{
    (*coord).nX=nNb1;
    (*coord).nY=nNb2;
    (*coord).nZ=nNb3;
}


/*-----------------------------------
 Descriptions : Initialise une la variable nx d'un type tPoint
 Entr�es : tPoint, 1 int
 Sorties : tPoint.nX initialis�
-----------------------------------*/

void setX(tPoint *coord, const int nNb1)
{
    (*coord).nX=nNb1;
}



/*-----------------------------------
 Descriptions : Initialise une la variable ny d'un type tPoint
 Entr�es : tPoint, 1 int
 Sorties : tPoint.nY initialis�
-----------------------------------*/

void setY(tPoint *coord, const int nNb1)
{
    (*coord).nY=nNb1;
}


/*-----------------------------------
 Descriptions : Initialise une la variable ny d'un type tPoint
 Entr�es : tPoint, 1 int
 Sorties : tPoint.nZ initialis�
-----------------------------------*/

void setZ(tPoint *coord, const int nNb1)
{
    (*coord).nZ=nNb1;
}




/*-----------------------------------
 Descriptions : Acc�de une la variable nx d'un type tPoint
 Entr�es : tPoint
 Sorties : tPoint.nx
-----------------------------------*/

int getX(const tPoint tPoint)
{
    return tPoint.nX;
}



/*-----------------------------------
 Descriptions : Acc�de une la variable ny d'un type tPoint
 Entr�es : tPoint
 Sorties : tPoint.n
-----------------------------------*/

int getY(const tPoint tPoint)
{
    return tPoint.nY;
}


/*-----------------------------------
 Descriptions : Acc�de une la variable ny d'un type tPoint
 Entr�es : tPoint
 Sorties : tPoint.n
-----------------------------------*/

int getZ(const tPoint tPoint)
{
    return tPoint.nZ;
}
