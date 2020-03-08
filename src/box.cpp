#include "box.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

box::box()
{
    density[0]=0;
    width[0]=0;
    height[0]=0;
    Xcenterofmass[0]=0;
    Ycenterofmass[0]=0;
    //ctor
}

void box::printBoxProperties(int numOfBox,int densityValue)
{
    for (int i=0;i<numOfBox;i++)
    {
        density[i]=(x[i+1]-x[i])*(y[i+1]-y[i])*densityValue;
        Xcenterofmass[i]=(x[i+1]-x[i])/2;
        XcenterX[i]=x[i]+Xcenterofmass[i];
        Xcenter[i]=XcenterX[i]*density[i];
        Ycenterofmass[i]=(y[i+1]-y[i])/2;
        YcenterY[i]=y[i]+Ycenterofmass[i];
        Ycenter[i]=YcenterY[i]*density[i];
        height[i]=(y[i+1]-y[i]);
        width[i]=(x[i+1]-x[i]);
        cout<<i+1<<". Box Density:"<<density[i]<<endl;
        cout<<i+1<<". Box Xcenterofmass:"<<XcenterX[i]<<endl;
        cout<<i+1<<". Box Ycenterofmass:"<<YcenterY[i]<<endl;
        cout<<i+1<<". Box Height:"<<height[i]<<endl;
        cout<<i+1<<". Box Width:"<<width[i]<<endl;
    }
}

void box::printCenterMass(int numOfBox)
{
    double xMassNumerator=0;
    double xMassDenominator=0;
    double yMassNumerator=0;
    double yMassDenominator=0;
    for(int i=0;i<numOfBox;i++)
    {
        //center of mass for X
        xMassNumerator=xMassNumerator + Xcenter[i];
        xMassDenominator=xMassDenominator + density[i];
        yMassNumerator=yMassNumerator + Ycenter[i];
        yMassDenominator=yMassDenominator + density[i];
    }
    double xMass=xMassNumerator/xMassDenominator;
    double yMass=yMassNumerator/yMassDenominator;
    cout<<"Center of gravity of space ("<<xMass<<","<<yMass<<")"<<endl;
}

box::~box()
{
    //dtor
}
