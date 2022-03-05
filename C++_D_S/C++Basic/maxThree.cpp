#include <iostream>
using namespace std;

/*
Logical operators:
 &&(AND) ||(OR) !=(NOT)

Relational Operators:
 <
 <=
 >
 >=
 ==
 !=
 */
void maxThree(int a, int b, int c){
    if( a > b && a > c){
        cout<<"a is biggest: " <<a;
    }else if (b > c){
        cout<<"b is biggest: "<<b;
    }else{
        cout<<"c is biggest: "<<c;
    }
}

int main() {
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    maxThree(a,b,c);

    return 0;
}
