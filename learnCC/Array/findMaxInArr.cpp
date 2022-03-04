#include<iostream>
using namespace std;

void Max()
{
    int A[]={4,6,27,15,31,22,30,29,8,16};
    int max=A[0];

    for(int i = 0; i < 10; i++){
        if( A[i] > max){
            max = A[i];
        }
    }

    //write a loop to find max

    cout<<max;
}

void findMax(){
    int A[]={4,6,27,15,31,22,30,29,8,16};
    int max=A[0];
    for(int x: A){
        if(x > max){
            max = x;
        }
    }
    cout<<max;
}

//write a loop to find max

int main(){
    Max();
    cout<<endl;
    findMax();
    return 0;
}