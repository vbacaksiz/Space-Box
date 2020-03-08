#ifndef COORD_H
#define COORD_H

class coord
{
    public:
        coord();
        virtual ~coord();
        coord(int xx,int yy);
        double setCoord(int x[20],int y[20],int range,int numOfBox);
        void printCoord(int numOfBox);
        double x[20];
        double y[20];
    protected:

    private:
};

#endif // COORD_H
