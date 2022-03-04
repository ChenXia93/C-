#include<iostream>
using namespace std;
//return an adress
int & fun(int &a){
    //10
    cout<<a<<endl;
    //10
    return a;
}
int main(){

    int x = 10;
    fun(x) = 20;
    cout<<x;
}