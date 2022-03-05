#include<iostream>
using namespace std;

int main(){
    char s[10]="hello";
    cout<<s<<endl;
    char a[]= {'H','E','L','L','O'};
    char *b = "hello";
    cout<<b<<endl;

    char c[20];
    cout<<"Enter your name:";
//    cin>>c;
//    cout<<c;

    //cin.get()
//    cin.get(c,50);
//    cout<<c;
    //cin.getline()
    cin.getline(c,50);
    cout<<c;
    return 0;
}