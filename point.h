#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

//TYPES
typedef struct tPoint
{
    int nX;
    int nY;
    int nZ;
}tPoint;

//PROTOTYPES
extern void initPoint(tPoint *coord,const int nNb1,const int nNb2,const int nNb3);
extern void setX(tPoint *coord, const int nNb1);
extern void setY(tPoint *coord, const int nNb1);
extern void setZ(tPoint *coord, const int nNb1);
extern int getX(const tPoint tPoint);
extern int getY(const tPoint tPoint);
extern int getZ(const tPoint tPoint);


#endif // POINT_H_INCLUDED
