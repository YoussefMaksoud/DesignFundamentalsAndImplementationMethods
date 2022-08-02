# include <iostream>
# include <stdlib.h>
# include <math.h>
# include "CurveCut.h"
# include "Shape.h"
# include "Circle.h"
# include "Rectangle.h"

using namespace std;


CurveCut::CurveCut(double x, double y, double sideA, double sideB, double radius, const char shapeName[])
: Shape(x, y, shapeName), Rectangle(x, y, sideA, sideB, shapeName), Circle(x, y, radius, shapeName) {


}


double CurveCut::area(){
    double total = getSideA() * getSideB();
    double quartCirc = (pow(getRadius(), 2) * M_PI)/4;

    return total - quartCirc;

}

double CurveCut::perimeter(){

    return 2*(getSideA() + getSideB() - getRadius());

}

void CurveCut::display(){

    cout << "CurveCut Name: " << getName();
    cout << "\nX-coordinate: " << getOrigin().getX();
    cout << "\nY-coordinate: " << getOrigin().getY();
    cout << "\nWidth: " << getSideA();
    cout << "\nLength: " << getSideB();
    cout << "\nRadius: " << getRadius() << "\n\n";

}