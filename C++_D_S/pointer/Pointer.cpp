#include<iostream>
using namespace std;
class constDemo{
public:
    int x = 10;
    int y = 20;
    //adding const to the back, will not allow the data to be modified
    constDemo(){
        x = 0;
        y = 0;
    }
    constDemo(int x, int y){
    this-> x = x;
    this->y = y;
    }
    void display() const{
    //   x++;
        cout<<x<<" "<<y<<endl;
    }
    void fun(const int &a, const int &b)const {
     //   x++:
        cout<<a<<" "<<b<<endl;
    }
  friend constDemo operator + (constDemo a, constDemo b){
        constDemo temp;
        temp.x = a.x + b.x;
        temp.y = b.y + b.y;
        return temp;
    }
    friend ostream& operator <<(ostream&out, constDemo &c){
        out<<c.x<<" "<<c.y<<endl;
        return out;
    }
    friend istream& operator >>(istream&in, constDemo c){
        in>>c.x>>c.y;
        return in;
    }
};

int main(){
    //constant sample # 1
    const int x = 10;
   //x++; will not work because int x is a constant variable. data cannot be modify
   // x++;
    cout<<x; //10
    cout<<"sample # 2:"<<endl;
    int a = 1;
    //const int: const pointer of int, cannot point to another data
    int *const ptr = &a;
    int y = 10;
    /*
     ptr = &y; -> cannot point to another data

     */
    cout<<"returns 1: " << *ptr<<endl;
    cout<<"sample #3"<<endl;
    const int *p = &x;
    /*
    ++*matrix;  -> int const can point to another data but modify the data
    */
    cout<<*p<<endl;
    cout<<"sample # 4"<<endl;
    //const pointer int const cannot point to another data or modify the data: LOCKED in
    const int* const pp = & x;
    /*
    ++*pp;
    pp = &y;
        Both condition is not allowed.
     */
    cout<<"Creating constDemo Object"<<endl;
    constDemo c;
    //x and y data is not modified
    c.display();
    cout<<"another function const sample:"<<endl;
    c.fun(1,4);
    cout<<"Testing Operator overloading"<<endl;
    constDemo cD, store;
    cD.x = 10;
    cD.y = 10;
    store = cD + cD;
    cout<<store.x<<store.y<<endl;
    constDemo c1,c2,c3;
    c1.x = 4, c1.y = 6;
    c2.x = 10,c2.y = 40;
    c3 = c2 + c1;
    cout<<c3.x << " "<<c3.y<<endl;
    cout<<c3<<endl;
    cin>>c3;
    cout<<c3;
     return 0;
}