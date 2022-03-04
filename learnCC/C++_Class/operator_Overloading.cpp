#include<iostream>
using namespace std;
class Complex{
public:
    int real;
    int imag;

//    Complex add(Complex c){
//        Complex temp;
//        temp.real = real + c.real;
//        temp.imag = imag + c.imag;
//
//        return temp;
//    }

    Complex operator + (Complex x){
        Complex temp;
        temp.real = real + x.real;
        temp.imag = imag + x.imag;

        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.real = 5;
    c1.imag = 10;
    c2.real = 10;
    c2.imag = 20;

//    c3 = c2.add(c1);
    c3 = c2 + c1 ;
    cout<<c3.real<<" "<<c3.imag<<endl;
    return 0;
}
