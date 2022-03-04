#include<iostream>
#include <cstring>
using namespace std;

int main(){
    //String s.length()
    string str = "Hello World";
    cout<<str.length()<<endl;           //returns 11
    //String s.size()
    cout<<str.size()<<endl;             //returns 11
    //String s.capacity()
    cout<<str.capacity()<<endl;         //returns 15
    //String s.resize()
    str.resize(50);
    cout<<str.capacity()<<endl;         //resize the str size
    //String s.max_size()
    cout<<str.max_size()<<endl;        //returns max_size 2147483647
    //String s.clear()
    str.clear();
    cout<<str<<endl;
    //string s.empty() check if the string is empty or null 
    if(str.empty()){
        cout<<"Yes: Empty";
    }else{
        cout<<"nope: not empty";
    }
    return 0;
}