#include<iostream>
#include <cstring>
using namespace std;

int main(){
    //String s.copy(char des[])
    string str = "Welcome";
    char c[20];
    str.copy(c,str.length());
    cout<<c<<endl;
    //output: Welcome
    //String s.find(str) or (char)
    cout<<str.find('W')<<endl;
    //output: return index 0
    cout<<str.rfind('l')<<endl;
    //output: return index 2
    cout<<str.find_first_of('e')<<endl;
    //output: return index 1
    cout<<str.find_last_of('c')<<endl;
    //output: return index 3
    cout<<"======================="<<endl;
    //String substr(start, number)
    cout<<str.substr(3,str.length())<<endl;
    //output: return come
    string str_2 ="Welcome";
    cout<<str.compare(str_2)<<endl;
    //output: return -1
    // return 0 : string r equal
    // return -1: string is smaller
    // return 1+: string is higher
    cout<<"======================="<<endl;
    //String at()
    cout<<str.at(4)<<endl;
    //string front()
    cout<<str.front()<<endl;
    //string back()
    cout<<str.back()<<endl;
    //String concat
    cout<< str + str_2<<"";

    return 0;
}