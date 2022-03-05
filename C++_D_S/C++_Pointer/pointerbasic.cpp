#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p;
    p = &a;

    // 10
    cout<<a<<endl;
    // reference of a
    cout<<&a<<endl;
    // reference of a
    cout<<p<<endl;
    // reference of p
    cout<<&p<<endl;
    // 10
    cout<<*p<<endl;


    return 0;
}