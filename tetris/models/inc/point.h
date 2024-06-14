#ifndef POINT_H
#define POINT_H
class point
{
private:
    /* data */
    int x;
    int y;

public:
    point(int p1, int p2) : x(p1), y(p2){};
    int getX();
    int getY();
    void setX(int);
    void setY(int);
    void setXY(int,int);
    ~point();
};

int point::getX()
{
    return x;
}

int point::getY()
{
    return y;
}


void point::setX(int p)
{
    x = p;
}

void point::setY(int p)
{
    y = p;
}

void point::setXY(int p1,int p2){
    x = p1;
    y = p2;
}

#endif