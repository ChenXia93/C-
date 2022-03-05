#include<iostream>
using namespace std;
int main(){
    //creating array in stock
    int size;
    cout<<"Enter number of elements:";
    cin>>size;

    int a[size];
    //getting the size: int are 4 bytes ( 4 * 20) = 80
    cout<<sizeof a<<endl;


    return 0;
}