/**
 * Client_B.cpp
 * 
 * author Youssef Maksoud
 * id: 30062891
 * 
 **/

#include "Client_B.h"
#include "User.h"
#include <string>

using namespace std;

//sets instance if there is one, creates a new static instance otherwise
Client_B::Client_B(){
    instance = instance->getInstance();
}

//adds a new user to the instance
void Client_B::add(string username, string password){
    this->instance->add(username, password);
}

//searches the user list and returns the user if found
User* Client_B::validate(string username, string password){
    return this->instance->validate(username, password);
}
