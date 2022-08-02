# include <iostream>
# include <stdlib.h>
# include "Point.h"
# include "math.h"

using namespace std;

int Point::pointCount = 0;

Point::Point(double x, double y){

    this->xCoord = x;
    this->yCoord = y;

    id = 1000 + pointCount;

    pointCount ++;
}

Point& Point::operator =(const Point& rhs){
    this->xCoord = rhs.xCoord;
    this->yCoord = rhs.yCoord;
    this->id = rhs.id;

    return *this;
}

void Point::setX(double x){
    this->xCoord = x;
}

void Point::setY(double y){
    this->yCoord = y;
}
        
void Point::setID(int id){
    this->id = id;
}
        
const double Point::getX(){
    return this->xCoord;
}
        
const double Point::getY(){
    return this->yCoord;
}
        
const int Point::getID(){
    return this->id;
}

int Point::counter(){
    return pointCount;
}

double Point::distance(Point p1, Point p2){

    double a = pow((p2.getX() - p1.getX()),2);
    double b = pow((p2.getY() - p1.getY()),2);
    return sqrt(a + b);
    
}

double Point::distance(Point other){

    double a = pow((this->getX() - other.getX()),2);
    double b = pow((this->getY() - other.getY()),2);
    return sqrt(a + b);

}