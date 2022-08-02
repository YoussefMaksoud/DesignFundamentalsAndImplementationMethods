/**
 * Client_A.cpp
 * 
 * author Youssef Maksoud
 * id: 30062891
 * 
 **/

#include "Client_A.h"
#include "User.h"

#include <string>

using namespace std;

//sets instance if there is one, creates a new static instance otherwise
Client_A::Client_A(){
    instance = instance->getInstance();
}

//adds a new user to the instance
void Client_A::add(string username, string password){
    this->instance->add(username, password);
}

//searches the user list and returns the user if found
User* Client_A::validate(string username, string password){
    return this->instance->validate(username, password);
}

