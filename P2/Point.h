#ifndef POINT_H
#define POINT_H

using namespace std;

class Point{

    private:

        double xCoord;

        double yCoord;

        int id;

        static int pointCount;

    public:

        Point(double x, double y);

        Point& operator =(const Point& rhs);

        void setX(double x);

        void setY(double y);
        
        void setID(int id);
        
        const double getX();
        
        const double getY();
        
        const int getID();

        static int counter();

        static double distance(Point p1, Point p2);

        double distance(Point other);


};

#endif
