/**
 * LoginServer.h
 * 
 * author Youssef Maksoud
 * id: 30062891
 * 
 **/

#ifndef LOGINSEVER_H
#define LOGINSEVER_H

#include <vector>
#include "User.h"

using namespace std;

class LoginServer{
    protected:
        vector<User> users;
        static LoginServer* instance;
    private:
        LoginServer();
        LoginServer(const LoginServer& src);
        LoginServer& operator=(const LoginServer& rhs);
    public:
        static LoginServer* getInstance();
        void add(string username, string password);
        User* validate(string username, string password);
};



#endif