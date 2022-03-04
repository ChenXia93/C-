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
    cout<<endl;
    //String s.append()
    str.append("learnC++");
    cout<<str<<endl;
    //String s.insert(3,element)
    str.insert(0,"L");
    cout<<str<<endl;
    //String s.replace(3,5,"aa")
    str.replace(0,3,"G");              //returns: From GlearnC++ --> GarnC++
    cout<<str<<endl;
    //String s.erase()
    str.erase();                                 //erase the string
    cout<<str<<endl;
    if(str.empty()){
        cout<<"Empty";
    }
    cout<<endl;
    str.append("hello");
    //String s.push_back('z)
    str.push_back('c');                       //adds a single char to the back
    cout<<str<<endl;
    //String s.pop_back()
    str.pop_back();                             //removes the last element
    cout<<str<<endl;
    //String s.swap(s2)
    string s2 = "word";                        //swaps the string around 
    str.swap(s2);                         //  s1 = "AAA"   s2 ="BBB
    cout<<s2<<endl;                          // s2 = "AAA"    s1 = "BBB"

    return 0;
}