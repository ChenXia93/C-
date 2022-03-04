#include<iostream>
using namespace std;


//write a pow() function here
int pow(int m, int n){
    int p = 1;
    for(int i = 0; i < n; i++){
        p = p * m;
    }
    return p;
}

void Main()
{
    cout<<pow(2,5);
}

