#include<iostream>
using namespace std;

//passing by value
//values will remind the same
//passing by address
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

//pass by reference
void swap_2(int x, int  y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int x = 10, y = 20;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}
