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


    inline  int getLength(){
        return length;
    }
    inline  int getBreadth(){
        return breadth;
    }
    int area();
    int perimeter();
    bool isSqure();
    ~Rectangle();

};
int Rectangle :: area(){
    return length * breadth;
}
int Rectangle ::perimeter() {
    return 2 * (length + breadth);
}

bool Rectangle :: isSqure(){
    return length ==breadth;
}

Rectangle :: ~Rectangle(){
    cout<<"Rectangle is destroyed"<<endl;
}


int main(){
    // dot operator is used to access the class variable
    Rectangle r2(10,10);
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
    cout<<r2.isSqure()<<endl;

}