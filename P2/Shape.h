#ifndef SHAPE_H
#define SHAPE_H

# include "Point.h"

using namespace std;

class Shape{

    private:

        Point* origin;

        char *shapeName;

    public:

        Shape(Point* o, char* sn);

        Shape(double x, double y, const char* sn);

        ~Shape();

        Shape(const Shape& source);

        Shape& operator =(const Shape &rhs);

        Point getOrigin();

        void setOrigin(Point o);

        const char* getName();

        void  virtual display();

        virtual double distance(Shape& other);

        static double distance(Shape& theShape, Shape& other);

        void move(double dx, double dy);

        double virtual area() = 0;

        double virtual perimeter() = 0;

};

#endif

