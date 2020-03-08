#include "coord.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

coord::coord()
{
    x[0]=0;
    y[0]=0;
    //ctor
}

coord::coord(int xx,int yy)
{
    x[0]=xx;
    y[0]=yy;
}

double coord::setCoord(int x[20],int y[20],int range,int numOfBox)
{
    for (int i=0;i<numOfBox;i++)
    {
        x[i+1]=x[i]+(rand()%range+1);
        y[i+1]=y[i]+(rand()%range+1);
    }
}

void coord::printCoord(int numOfBox)
{
    for (int i=0;i<numOfBox;i++)
    {
        cout<<i+1<<". Box Coordinates ("<<x[i]<<","<<y[i]<<")  ("<<x[i+1]<<","<<y[i+1]<<")"<<endl;
    }
}

coord::~coord()
{
    //dtor
}
