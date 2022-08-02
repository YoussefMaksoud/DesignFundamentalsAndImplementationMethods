//#ifndef CIRCLE_H
//#define CIRCLE_H


# include "Rectangle.h"
# include "Circle.h"

class CurveCut: public Rectangle, public Circle{

    private:

    public:

        CurveCut(double x, double y, double sideA, double sideB, double radius, const char shapeName[]);

        double area();

        double perimeter();

        void display();

};

//#endif