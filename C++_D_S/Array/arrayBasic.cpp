#include <iostream>
using namespace std;

int main(){
    //initialization values
    int a[5] = {3,4,10,12,15};
    for(int i = 0; i< 5; i++){
        cout<<a[i]<<endl;
    }
    //initialization few index
    cout<<endl;
    int b[5] = {1,2};
    for(int j = 0; j < 5; j++){
        cout<<b[j]<<endl;
    }

    //For each loop
    // for elements in a, each elements will take in x
    for(int x : a){
        cout<<x<<endl;
    }
    //for each loop using "auto"
    for(auto z : a){
        cout<<z<<endl;
    }

    int d[][2] = {{2,2},{3,3},{4,4}};
    for(auto& x : d){
        for(int y: x){
            cout <<y;
        }
    }


    return 0;
}