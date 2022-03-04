#include <iostream>
using namespace std;
class Parent{
public:
    static void display();
};
void Parent :: display() {
    cout<<"Displaying parent"<<endl;
}

class Child: public Parent{
public:
    static void display();
};
void Child:: display() {
    cout<<"Displaying Child"<<endl;
    cout<<1 + 1<<endl;
}

int main(){
    //Function overriding
    //writing the same feature but with slightly different feature inside
    Parent p;
    Child c;
    p.display();
    c.display();



    return 0;
}


















/*
#include <iostream>
using namespace std;

int main(){

    return 0;

}
 */