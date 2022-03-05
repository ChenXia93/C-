#include<iostream>
using namespace std;
//Parent class
class Base{
public:
    int a;
    void display(){
        cout<<"Displaying Base class:"<<endl;
    }
};
//Child Class
class Derived: public Base{
public:
    int b;
    void show(){
        cout<<"Showing Dervied Class Sample:"<<endl;
    }
};

int main()
{
    //Base Class:
    Base b;
    b.display();

    //Dervied Class
    Derived der;
    der.show();
    //Accessing Base class
    der.a = 10;
    cout<<der.a<<endl;
    return 0;
}
