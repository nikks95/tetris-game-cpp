#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class shape
{
private:
    point position;
    int type;
    int deg;
public:
    shape(int stype,point p,int degree);
    ~shape();
};

shape::shape(int stype,point p,int degree)
{
    position = p;
    type = stype;
    deg = degree;
}

shape::~shape()
{
}
#endif