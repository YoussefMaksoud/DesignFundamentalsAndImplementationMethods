# include <stdlib.h>
# include <iostream>
# include "Shape.h"
# include "Rectangle.h"


using namespace std;

Rectangle::Rectangle(double x, double y, double a, double b, const char name[])
: Shape(x, y, name){

    this->sideA = a;
    this->sideB = b;
}

Rectangle::Rectangle(const Rectangle& source)
: Shape(source){
    this->sideA = source.sideA;
    this->sideB = source.sideB;
    
}

double Rectangle::area(){
    return getSideA() * getSideB();
}

double Rectangle::perimeter(){
    return (2 * getSideA()) + (2 * getSideB());
}

const double Rectangle::getSideA(){
    return sideA;
}

void Rectangle::setSideA(double len){
    this->sideA = len;
}

const double Rectangle::getSideB(){
    return sideB;
}

void Rectangle::setSideB(double len){
    this->sideB = len;
}

void Rectangle::display(){

cout << "Rectangle Name: " << getName();
cout << "\nX-coordinate: " << getOrigin().getX();
cout << "\nY-coordinate: " << getOrigin().getY();
cout << "\nSide a: " << sideA;
cout << "\nSide b: " << sideB;
cout << "\nArea: " << area();
cout << "\nPerimeter: " << perimeter() << "\n\n";
}