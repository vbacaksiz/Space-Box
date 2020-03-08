#include "space.h"
#include <stdlib.h>
#include <iostream>

using namespace std;



space::space()
{
    //ctor
    spaceXRange=10;
    spaceYRange=10;
}

space::space(int XRange,int YRange)
{
    spaceXRange=XRange;
    spaceYRange=YRange;
}

double space::fillRandomBox(int numOfBox,int boxRange,int spaceDensityValue)
{
    spaceDensity=spaceDensityValue;
    spaceNumOfBox=0;
    for(int i=0;i<numOfBox;i++)
    {

        if(x[i]+1>=spaceXRange||y[i]+1>=spaceYRange)
        {
            i=numOfBox;
            spaceNumOfBox=spaceNumOfBox-2;
        }
        else
        {
            x[i+1]=x[i]+(rand()%boxRange+1);
            y[i+1]=y[i]+(rand()%boxRange+1);
            density[i]=(x[i+1]-x[i])*(y[i+1]-y[i])*1;
            Xcenterofmass[i]=(x[i+1]-x[i])/2;
            Ycenterofmass[i]=(y[i+1]-y[i])/2;
            height[i]=(y[i+1]-y[i]);
            width[i]=(x[i+1]-x[i]);
        }
        spaceNumOfBox++;
    }
}

void space::printBoxCoordinates()
{
    return coord::printCoord(spaceNumOfBox);
}

void space::printBoxPro()
{
    return box::printBoxProperties(spaceNumOfBox,spaceDensity);
}
void space::printCenterOfMass()
{
    return box::printCenterMass(spaceNumOfBox);
}

space::~space()
{
    //dtor
}
