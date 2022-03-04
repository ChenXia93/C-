#include<iostream>
using namespace std;
//static variable
void fun(){
    //variable will remind in memory
    static int s = 10;
    s++;
    cout<<s<<endl;
}
int main(){

    fun(); // 11
    fun(); // 12
    fun(); // 13
}