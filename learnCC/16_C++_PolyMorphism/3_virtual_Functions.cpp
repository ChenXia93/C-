#include <iostream>
using namespace std;
class Parent{
public:
    virtual void display();
};
void Parent :: display() {
    cout<<"Displaying parent"<<endl;
}

class Child: public Parent{
public:
    void display(); //override;
};
void Child:: display() {
    cout<<"Displaying Child"<<endl;
    cout<<1 + 1<<endl;
}

int main(){
    //Virtual functions
    Parent *d;
    d = new Child();
    d->display();

    return 0;
}


















/*
#include <iostream>
using namespace std;

int main(){

    return 0;

}
 *///
// Created by chen on 1/31/2022.
//

