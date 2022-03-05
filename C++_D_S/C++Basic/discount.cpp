#include <iostream>
#include <cmath>
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
void Roots(float a, float b, float c){
    float d, r1, r2;

    d = (b*b-(4*(a*c)));
    if(d == 0){
        r1 = -b/( 2 * a );
        cout<<"real and equal"<<r1;
    }else if( d > 0){
        r1 = (-b + sqrt(d))/(2 * a);
        r2 = (-b - sqrt(d))/(2 * a);
        cout<<"real and unequal "<<r1<<" "<<r2;
    }else{
        cout<<"imaginary";
    }
}

void grades(int a, int b, int c){
    float total , avg;
    total = a + b + c;
    avg = total / 3;
    if( avg >= 60){
        cout<<"A";
    }else if( avg >= 35 && avg < 60) {
        cout << "B";
    }else{
        cout<<"C";
    }
    cout<<endl;
}

void discount(int amount){
    float disAmount;
    if(amount >= 5000){
        disAmount = amount - amount * 20 / 100.0;
        cout<<disAmount;
    }else {
        if (amount >= 2000 && amount < 5000) {
            disAmount = amount - (amount * 10) / 100.0;
            cout<<disAmount;
        }else{
            disAmount = amount - amount * 5 / 100.0;
            cout<<disAmount;
        }
    }
}



int main() {
    int a,b,c,amount;
    cout<<"Enter three numbers:";
//    cin>>a>>b>>c>>amount;
    cin>>amount;
    discount(amount);
    return 0;
}
