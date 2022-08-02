/**
 * LoginServer.cpp
 * 
 * author Youssef Maksoud
 * id: 30062891
 * 
 **/

#include "LoginServer.h"
#include "User.h"

using namespace std;

LoginServer* LoginServer::instance = 0;

//default constructor of loginserver
LoginServer::LoginServer(){

}

//constructor takes loginserver argument and sets the current to src
LoginServer::LoginServer(const LoginServer& src){
    if(this->instance != NULL){
        delete this->instance;
        *LoginServer::instance = src;
    }
}

//assignment operator
LoginServer& LoginServer::operator=(const LoginServer& rhs){
    for(int i = 0; i < rhs.users.size(); i++){
        User tmp = {rhs.users.at(i).userName, rhs.users.at(i).password};
        this->users.push_back(tmp);
    }

    this->instance = rhs.instance;
    return *this;
}

//returs the loginserver instance, if it does not exist
//it creates a new instance
LoginServer* LoginServer::getInstance(){

    if(instance == NULL){
        instance = new LoginServer();
    }

    return instance;
}

//adds a new user to the users list
void LoginServer::add(string username, string password){
    User newUser = {username, password};
    users.push_back(newUser);
}

//searches the user vector and returns the user if found
User* LoginServer::validate(string username, string password){
    User* tmp;
    for(int i = 0; i < this->users.size(); i++){
        if(strcmp(username.c_str(), users.at(i).userName.c_str()) == 0 && strcmp(users.at(i).password.c_str(), password.c_str()) == 0){
            tmp = new User;
            tmp->userName = users.at(i).userName;
            tmp->password = users.at(i).password;
        }
    }
   return tmp;
}

