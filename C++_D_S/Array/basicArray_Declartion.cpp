#include <iostream>
using namespace std;
int main() {
    //declaring an array
    int A[5];
    //initializing array
    int B[5] = {2,4,6,8,10};
    //initializing few elements in the array
    int C[10] = {12,14};
    //initializing no size
    int D[] = {3,5,7,9};

    //Displaying the array
    for(int i =0; i < 5;i++){
        cout<<B[i]<<" ";
    }


    return 0;
}
