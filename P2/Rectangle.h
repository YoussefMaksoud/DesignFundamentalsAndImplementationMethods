#ifndef RECT_H
#define RECT_H

# include "Shape.h"

using namespace std;

class Rectangle: public virtual Shape{

    private:

        double sideA;

        double sideB;

    public:

        Rectangle(double x, double y, double a, double b, const char name[]);

        Rectangle(const Rectangle& source);

        double area();

        double perimeter();

        const double getSideA();

        void setSideA(double len);

        const double getSideB();

        void setSideB(double len);

        void display();

};

#endif