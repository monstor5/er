#ifndef INFO_H
#define INFO_H

class Info 
{
private:
    string name;
    int pin;
public:
    const string DEF_NAME = "user";
    const int DEF_PIN = 1234;
    Info();
    Info(string n, int p);
    string getName();
    int getPin();
    void setName(string nn);
    void setPin(int p);
};

#endif

#include "info.h"
#include <iostream>
#include <fstream>
#include <ostream>
#include <iomanip>
#include <string>

using namespace std;

// struct user_opt{
    // string name;
    // int pin;
// };

info::Info()
{
    name = DEF_NAME;
    pin = DEF_PIN;
}

info::Info(string n, int p): name(n), pin(p){}

string info::getNmae(){
    return name;
}
int info::getPin(){
    return pin;
}
void info::setName(string nn){
    name = nn;
}
void info::setPin(int p){
    pin = p;
}

ostream& operator<<(ostream& os, Info& obj)
{
    os << "name: " << obj.getName() << "\npin: "<< obj.getPin()<< endl;
    return os;
}

istream& operator>>(istream& is, Info& obj)
{
    string n;
    int p;
    is >> n >> p;
    obj.getName(n);
    obj.getPin(p);
    return is;
}


int main(){
    bool log_sing;
    cout << "Input 0 if you wont log in, else input 1\n>>>";
    cin >> log_sing;
    
    if (log_sing){
        Info* user = new Info();
        cout << "Input your name\n>>>";user.setName(cin);
    }

    return 0;
    

}
