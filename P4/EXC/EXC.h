/**
 * EXC.h
 * Converting Exercise C to c++ class
 * header file definiton
 * 
 * author: Youssef Abdel maksoud
 * ID: 30062891
 * 
 **/

# include <string>

using namespace std;

/*abstract class Moveable acts as an 
interface with two pure virtual fuctions*/
class Moveable{
    public:
        virtual void foreward() = 0;
        virtual void backward() = 0;
};

/*abstract class Resizeable acts as an 
interface with two pure virtual fuctions*/
class Resizeable{
    public:
        virtual void enlarge(int n) = 0;
        virtual void shrink(int n) = 0;
};

/*base class Vehicle inherits the behaviour of the two interfaces above*/
class Vehicle: public Moveable, public Resizeable{
    protected:
        string name;
    public:
        Vehicle(string name);
        void move();
};

/*class car inherits the behaviour of both interfaces and
also the base class Vehicle*/
final class Car: public Vehicle, public Moveable{
    private:
        int seats;
    public:
        void turn();
};


 

 