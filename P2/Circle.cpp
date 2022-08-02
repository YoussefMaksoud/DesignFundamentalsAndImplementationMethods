# include <stdlib.h>
# include <iostream>
# include "math.h"
# include "Shape.h"
# include "Circle.h"

using namespace std;

Circle::Circle(double x, double y, double radius, const char shapeName[])
:Shape(x, y, shapeName){

    this->radius = radius;

}

double Circle::area(){
    return (pow(radius, 2) * M_PI);
}

double Circle::perimeter(){
    return 2 * radius * M_PI;
}

void Circle::setRadius(double radius){
    this->radius = radius;
}

const double Circle::getRadius(){
    return this-> radius;
}

void Circle::display(){
cout << "Circle Name: " << getName();
cout << "\nX-coordinate: " << getOrigin().getX();
cout << "\nY-coordinate: " << getOrigin().getY();
cout << "\nRadius is: " << getRadius();
cout << "\nArea: " << area();
cout << "\nPerimeter: " << perimeter() << "\n\n";
}