#ifndef BOX_H
#define BOX_H
#include "coord.h"

class box:public coord
{
    public:
        box();
        virtual ~box();
        double density[20];
        double width[20];
        double height[20];
        double Xcenterofmass[20];
        double XcenterX[20];
        double Xcenter[20];
        double Ycenterofmass[20];
        double Ycenter[20];
        double YcenterY[20];
        void printBoxProperties(int numOfBox,int densityValue);
        void printCenterMass(int numOfBox);

    protected:

    private:
};

#endif // BOX_H
