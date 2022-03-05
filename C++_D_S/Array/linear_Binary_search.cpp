#include <iostream>
using namespace std;

int main(){
    int A[7] = {4,8,6,9,5,2,7};
    int n = 7;
    int key = 5;
    for(int i = 0; i < n; i++){
        if(A[i] == key){
            cout<<"key "<<key<<" found at index: "<< i <<endl;
        }
    }

    int low = 0;
    int high = 9;
    int mid = 0;
    while(low <= high){
        mid = (low + high) / 2;
        if(key == A[mid]){
            cout<<"Key found "<<mid<<endl;
            return 0;
        }else if( key < A[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return 0;
}