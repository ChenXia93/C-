#include<iostream>
using namespace std;
class Rectangle{
private:
    int length;
    int breadth;
public:
    //constructor
    Rectangle(){
        length = 1;
        breadth = 1;
    }

    Rectangle(int l, int b){
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }
    void setLength(int l) {
        if (l >= 0) {
            length = l;
        } else {
            length = 0;
        }
    }
    void setBreadth(int b) {
        if (b >= 0) {
            breadth = b;
        } else {
            breadth = 0;
        }
    }


    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }

    int area(){
        return length * breadth;
    }

    int perimeter(){
        return 2*(length + breadth);
    }
};

int main(){
    // dot operator is used to access the class variable
    Rectangle r2(10,5);
    cout<<r2.area()<<endl;
    //copying constructor
    Rectangle r1(r2);
    cout<<r1.area()<<endl;
    r2.setLength(100);
    cout<<r2.area()<<endl;
    Rectangle r3(r2);
    cout<<r3.area()<<endl;

    return 0;
}