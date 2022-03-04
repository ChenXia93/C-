#include<iostream>
using namespace std;
int main(){
    // creating 2D matrix:
    int d[3][2] = {{2,2},{3,3},{4,4}};
    for(auto& x : d){
        for(int y: x){
            cout <<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}