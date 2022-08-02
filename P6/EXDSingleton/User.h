/**
 * User.h
 * 
 * author Youssef Maksoud
 * id: 30062891
 * 
 **/

#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

//Encapsulates a username and password together to create a user
struct User{
    public:
        string userName;
        string password;    
};

#endif
