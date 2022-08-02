/**
 * Client_B.h
 * 
 * author Youssef Maksoud
 * id: 30062891
 * 
 **/

#ifndef CLIENT_B_H
#define CLIENT_B_H

#include "User.h"
#include "LoginServer.h"

using namespace std;

class Client_B{
    private:
        LoginServer* instance;

    public:
        Client_B();

        void add(string userName, string password);

        User* validate(string username, string password);
};

#endif