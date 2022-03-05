#include <iostream>
using namespace std;
void comparedStr(char a[], char b[]){
    int i, j;
    for(i = 0, j = 0; a[i]!='\0'&& b[j]!='\0'; i++,j++){
        if(a[i] != b[j]){
            break;
        }
    }
    if(a[i] == b[j]){
        cout<<"true";
    }else if(a[i] < b[j]){
        cout<<"smaller";
    }else{
        cout<<"greater";
    }
}

int main(){
    //comparing a string
    char a[] ="paint";
    char b[] ="paint";
    comparedStr(a,b);

}//
// Created by chen on 2/3/2022.
//

