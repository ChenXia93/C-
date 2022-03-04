#include<iostream>
using namespace std;

void Sum()
{
    int A[]={2,4,11,8,10,15,13},n=7;
    int sum=0;
    for(int i = 0; i < n; i++){
        sum = sum + A[i];
    }
    cout<<"total sum is: "<< sum<<endl;

    //add all elements from Array A to sum
    //print sum
}
int main(){
    Sum();
    return 0;
}