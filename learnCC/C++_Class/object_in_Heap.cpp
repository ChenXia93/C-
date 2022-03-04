#include<iostream>
using namespace std;
class Rectangle{
public:
    int length;
    int breadth;

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2*(length + breadth);
    }
};

int main(){
    // dot operator is used to access the class variable
    Rectangle *p  = new Rectangle();
    p -> length = 10;
    p -> breadth = 5;
    cout<<p -> area()<<endl;
    return 0;
}