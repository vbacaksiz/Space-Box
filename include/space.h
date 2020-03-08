#ifndef SPACE_H
#define SPACE_H
#include "Box.h"

class space:public box
{
    public:
        space();
        virtual ~space();
        space(int XRange,int YRange);
        double fillRandomBox(int numOfBox,int boxRange,int density);
        void printBoxCoordinates();
        void printBoxPro();
        void printCenterOfMass();

    protected:

    private:
        double spaceXRange;
        double spaceYRange;
        double spaceDensity;
        double spaceNumOfBox;
};

#endif // SPACE_H
