#include<iostream>
using namespace std;

int main(){
    char s[50];
    cout<<"Enter few characters or string:";
//    cin>>s;
//    cout<<s;
    cin.get(s,50);
    cout<<s<<endl;
    cin.ignore();
    cout<<"Enter few characters or string:"<<endl;
    cin.get(s,50);
    cout<<s;
    return 0;
}