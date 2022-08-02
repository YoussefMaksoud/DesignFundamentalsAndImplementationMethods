# include <stdlib.h>
# include <iostream>
# include "Shape.h"
# include "Point.h"


using namespace std;


Shape::Shape(double x, double y, const char* sn){
    this->origin = new Point(x, y);

    shapeName = new char[(strlen(sn)) + 1];

    if(shapeName == NULL){
        cerr << "Memory Unavailable";
        exit(1);
    }

    strcpy(shapeName, sn);
}

Shape::~Shape(){
    delete[] shapeName;
}

Shape& Shape::operator =(const Shape &rhs){
    
    if(this == &rhs){
        return *this;
    }

    delete[] shapeName;
    shapeName = new char[(strlen(rhs.shapeName)) + 1];

    if(shapeName == NULL){
        cerr << "Memory Unavailable";
        exit(1);
    }

    strcpy(shapeName, rhs.shapeName);
    origin = rhs.origin;
    return *this;
}

Shape::Shape(const Shape& source){

    this->shapeName = (new char[strlen(source.shapeName)+1]);

    if(this->shapeName == NULL){
        cerr << "Memory Unavailable";
        exit(1);
    }

    strcpy(shapeName, source.shapeName);

    origin = source.origin;
    
}

Point Shape::getOrigin(){
    return *origin;
}

void Shape::setOrigin(Point o){
    delete origin;
    
    origin = new Point(o.getX(), o.getY());
}

const char* Shape::getName(){
    return this->shapeName;
}

void Shape::display(){
    cout << "\nShape Name: " << this->shapeName;
    cout << "\nX-Coordonate: " << this->origin->getX();
    cout << "\nY-Coordonate: " << this->origin->getY() << "\n";
}

double Shape::distance(Shape& other){
    return origin->distance(other.getOrigin());
}

double Shape::distance(Shape& theShape, Shape& other){
    return Point::distance(theShape.getOrigin(), other.getOrigin());
}

void Shape::move(double dx, double dy){
    this->origin->setX((origin->getX()) + dx);
    this->origin->setY((origin->getY()) + dy);
}
