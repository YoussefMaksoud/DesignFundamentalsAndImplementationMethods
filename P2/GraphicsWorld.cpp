# include <iostream>
# include <stdlib.h>
# include "GraphicsWorld.h"
# include "Point.h"
# include "Square.h"
# include "Rectangle.h"
# include "Circle.h"
# include "CurveCut.h"

using namespace std;

GraphicsWorld::GraphicsWorld(){}

void GraphicsWorld::run(){

    #if 1

        Point m (6, 8);
        Point n (6, 8);
        n.setX(9);
        cout << "\nExpected to display the distance between m and n is: 3";
        cout << "\nExpected to display the distance between m and n is: " <<      m.distance(n);
        cout << "\nExpected second version of the distance funtion to also print: 3";
        cout << "\nThe distance between m and n is again: " << Point::distance(m,n) << "\n";

    #endif

    #if 1

        cout << "\n\nTesting functions in class Square:" << endl;
        Square s(5, 7, 12, "Square - S");
        s.display();

    #endif

    #if 1

        cout << "\n\nTesting functions in class Rectangle:" << endl;
        Rectangle a(5, 7, 12, 15, "\nRectangle A");
        a.display();
        Rectangle b(16, 7, 8, 9, "\nRectangle B");
        b.display();
        double d = a.distance(b);
        cout << "\nDistance between Rectangles A and B is: " << d << endl;
        Rectangle rec1 = a;
        rec1.display();
        cout << "\n\nTesting assignment operator in class Rectangle:" << endl;
        Rectangle rec2(3, 4, 11, 7, "Rectangle rec2");
        rec2.display();
        rec2 = a;
        a.setSideB(200);
        a.setSideA(100);
        cout << "\nExpected to display following values for rec2:" << endl;
        cout << "\nRectangle name: Rectangle A\n" << "X-Coordonate: 5\n" << "Y-Coordonate: 7\n"
                    << "Side A: 12\n" << "Side B: 15\n" << "Area: 180\n" << "Perimeter: 54\n";
        cout << "\nIf it doesn't, there is a ptoblem with assignment operator.\n" << endl;
        rec2.display();


        cout << "\n\nTesting copy constructor in class rectangle:" << endl;
        Rectangle rec3(a);
        rec3.display();
        a.setSideB(300);
        a.setSideA(400);
        cout << "\nExpected to display following values for rec3:" << endl;
        cout << "\nRectangle name: Rectangle A\n" << "X-Coordonate: 5\n" << "Y-Coordonate: 7\n"
                    << "Side A: 100\n" << "Side B: 200\n" << "Area: 20000\n" << "Perimeter: 600\n";
        cout << "\nIf it doesn't, there is a ptoblem with assignment operator or copy constructor.\n" << endl;
        rec3.display();

    #endif

    #if 1

        cout << "\nTesting array of pointers and polymorphism:" << endl;
        Shape* sh1[4];
        sh1[0] = &s;
        sh1[1] = &b;
        sh1[2] = &rec1;
        sh1[3] = &rec3;
        sh1[0] -> display();
        sh1[1] -> display();
        sh1[2] -> display();
        sh1[3] -> display();

    #endif

    #if 1

        cout << "\nTesting Functions in class Circle:" <<endl;
        Circle c (3, 5, 9, "CIRCLE C");
        c.display();
        cout << "the area of " << c.getName() <<" is: "<< c.area() << endl;
        cout << "the perimeter of " << c.getName() << " is: "<< c.perimeter() << endl;
        d = a.distance(c);
        cout << "\nThe distance between rectangle a and circle c is: " <<d << "\n\n";

        CurveCut rc (6, 5, 10, 12, 9, "CurveCut rc");
        rc.display();
        cout << "the area of " << rc.getName() <<" is: "<< rc.area();
        cout << "  the perimeter of " << rc.getName() << " is: "<< rc.perimeter();
        d = rc.distance(c);
        cout << "\nThe distance between rc and c is: " <<d;
        // Using array of Shape pointers:
        Shape* sh[4];
        sh[0] = &s;
        sh[1] = &a;
        sh [2] = &c;
        sh [3] = &rc;
        sh [0]->display();
        cout << "\nthe area of "<< sh[0]->getName() << "is:  "<< sh[0] ->area();
        cout << "\nthe perimeter of " << sh[0]->getName () << " is:  "<< sh[0]->perimeter() << "\n";
        sh [1]->display();
        cout << "\nthe area of "<< sh[1]->getName() << "is:  "<< sh[1] ->area();
        cout << "\nthe perimeter of " << sh[0]->getName () << " is:  "<< sh[1]->perimeter() << "\n";
        sh [2]->display();
        cout << "\nthe area of "<< sh[2]->getName() << "is:  "<< sh[2] ->area();
        cout << "\nthe circumference of " << sh[2]->getName ()<< " is:  "<< sh[2]->perimeter() << "\n";
        sh [3]->display();
        cout << "\nthe area of "<< sh[3]->getName() << "is:  "<< sh[3] ->area();
        cout << "\nthe perimeter of " << sh[3]->getName () << " is:  "<< sh[3]->perimeter() << "\n";
        cout << "\nTesting copy constructor in class CurveCut:" <<endl;
        CurveCut cc = rc;
        cc.display();
        cout << "\nTesting assignment operator in class CurveCut:" <<endl;
        CurveCut cc2(2, 5, 100, 12, 9, "CurveCut cc2");
        cc2.display();
        cc2 = cc;
        cc2.display();

#endif
        
        
}
