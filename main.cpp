#include <iostream>
#include "space.h"

using namespace std;

int main()
{
    space s(30,40);
    s.fillRandomBox(4,3,1);
    s.printBoxCoordinates();
    s.printBoxPro();
    s.printCenterOfMass();
    return 0;
}
