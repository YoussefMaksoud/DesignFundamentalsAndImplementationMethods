/**
 * Client_A.h
 * 
 * author Youssef Maksoud
 * id: 30062891
 * 
 **/

#ifndef CLIENTA_H
#define CLIENTA_H

#include "User.h"
#include "LoginServer.h"


using namespace std;

class Client_A{
    private:
        LoginServer* instance;

    public:
        Client_A();

        void add(string userName, string password);

        User* validate(string username, string password);
};

#endif