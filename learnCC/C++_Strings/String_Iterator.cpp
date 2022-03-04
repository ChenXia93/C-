#include<iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    string str ="Today";
    string::iterator it;
    for(it = str.begin();it!=str.end(); it++){
        cout<<*it;
    }
    cout<<endl;
    int counter = 0;
    for(int i = 0;str[i]!='\0';i++){
        counter++;
    }
    cout<<counter;


    return 0;
}