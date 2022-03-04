#include<iostream>
using namespace std;
class Parent{
private:
    int a;
protected:
    int b;
public:
    int c;
    void funParent(){
        a = 10;
        b = 20;
        c = 30;
        cout<<a<<" "<<b<<" "<<c<<" ";
    }

};

class Child: protected Parent {
public:
    void funChild(){
//        a = 10;
        b = 5;
        c = 15;
        cout<<"Child "<<b<<" "<<c<<endl;
    }
};

class grandChild: public Child {
public:
    void funGrandChild(){
        b = 5;
        c = 15;

    }
};

int main()
{
    Child c;
    //Error a is private
//    c.a = 10;
    //Error b is protected
//    c.b = 20;
    c.funChild();
    Parent p;
    //Parent
    p.funParent();

}