#include<iostream>
using namespace std;
//Exception Basics

void mightGoWrong(){
    bool error = true;

    if(error){
        throw "error";
    }
}
int main(){

    try {
        mightGoWrong();
    }catch(int e){
        cout<<"Error code "<<e<<endl;
    }catch(char const *e){
        cout<<"error code_2 "<<endl;
    }
    cout<<"still running"<<endl;

}//
// Created by chen on 2/1/2022.
//

