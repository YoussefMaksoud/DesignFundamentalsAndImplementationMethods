#ifndef SQUARE_H
#define SQUARE_H

# include "Shape.h"

using namespace std;

class Square: public Shape{

    private:

        double sideA;

    public:

        Square(double x, double y, double sideA, const char shapeName[]);

        double area();

        double perimeter();

        void setSide(double sideA);

        const double getSide();

        void display();

};

#endif