#include<iostream>
using namespace std;
//return an adress
int * fun(int size){
    int *p = new int[size];
    for(int i = 0; i < size;i++){
        p[i]= 5 * i;
    }
    return p;
}
int main(){
    int x = 10, y = 20;
    // works
    //    int *ptr = fun(x);
    for(int i = 0; i < x; i++) {
        cout <<fun(x)[i]<< endl;
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
