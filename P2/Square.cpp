# include <stdlib.h>
# include <iostream>
# include "Shape.h"
# include "Square.h"

using namespace std;

Square::Square(double x, double y, double sideA, const char shapeName[])
:Shape(x, y, shapeName){

    this->sideA = sideA;

}

double Square::area(){
    return sideA * sideA;
}

double Square::perimeter(){
    return 4 * sideA;
}

void Square::setSide(double sideA){
    this->sideA = sideA;
}

const double Square::getSide(){
    return sideA;
}

void Square::display(){

    cout << "\nSquare Name: " << getName();
    cout << "\nX-coordinate: " << getOrigin().getX();
    cout << "\nY-coordinate: " << getOrigin().getY();
    cout << "\nSide a: " << sideA;
    cout << "\nArea: " << area();
    cout << "\nPerimeter: " << perimeter() << "\n\n";

}
