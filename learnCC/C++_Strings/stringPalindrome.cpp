#include<iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    string str = "madam";
    string res ="";
    int len = str.length();
    res.resize(len);

    for(int i = 0,j = len -1; i < len; i++,j--){
        res[i] = str[j];
    }
    if(str.compare(res) == 0){
        cout<<"string is palindrome";
    }else{
        cout<<"String is not a palindrome";
    }

    return 0;
}