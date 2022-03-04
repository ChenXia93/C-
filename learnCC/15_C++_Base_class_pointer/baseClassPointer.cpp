#include<iostream>
using namespace std;
class Base {
public:
    void fun_1(){
        cout<<"fun_1"<<endl;
    };
    void fun_2(){
        cout<<"Fun_2"<<endl;
    };
    void fun_3(){};

};
class Derived : public Base{
public:
    void fun_4(){};
    void fun_5(){};
};


int main()
{
    //Base class pointer Derived Class
    //Can only access base class available functions 
    Base *p;
    p = new Derived();
    p->fun_1();
    p->fun_2();


    return 0;
}