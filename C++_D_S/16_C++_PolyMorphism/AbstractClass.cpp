#include <iostream>
using namespace std;
class Car{
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};
class Toyota : public Car{
public:
    void start(){
        cout<<"Toyota Starting"<<endl;
    }
    void stop(){
        cout<<"toyota Stopping"<<endl;
    }
};

class Lexus : public Car{
public:
    void start(){
        cout<<"Lexus starting"<<endl;
    }
    void stop(){
        cout<<"Lexus stopping"<<endl;
    }

};
int main(){
    //Virtual functions, only display the child class not the base class
    //A virtual function is a member function which is declared within a base class
    // and is re-defined (overridden) by a derived class.
    Car *c;
    c = new Toyota();
    c->start();
    c->stop();
    c = new Lexus();
    c->start();
    c->stop();
    return 0;
}


















/*
#include <iostream>
using namespace std;

int main(){

    return 0;

}
 */