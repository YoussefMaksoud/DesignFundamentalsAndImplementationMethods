#ifndef CIRCLE_H
#define CIRCLE_H

# include "Shape.h"

class Circle: public virtual Shape{

    private:

        double radius;

    public:

        Circle(double x, double y, double radius, const char shapeName[]);

        double area();

        double perimeter();

        void setRadius(double sideA);

        const double getRadius();

        void display();

};

#endif