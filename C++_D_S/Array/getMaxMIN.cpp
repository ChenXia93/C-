#include <iostream>
using namespace std;

void sumPair(int arr[], int key, int arrSize ){
    for(int i = 0; i < arrSize - 1; i++){
        for(int j = i + 1; j < arrSize; j++){
            if(arr[i] + arr[j] == key){
                cout<<"Sum is: "<< arr[i] << "+" << arr[j]<< "="<<key<<endl;
            }
        }
    }
}

void getMaxMin(int arr[], int n){
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if( arr[i] > max){
            max = arr[i];
        }else if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout<<"Max is: "<<max<<endl;
    cout<<"Min is: "<<min<<endl;
}


int main() {
    //find sum of a pair in an Array
    int A[] ={1,1,2,3,4,5,6,8,8,9,9,10};
    int n = 12;
    int sum = 10;
    sumPair(A,sum,n);
    getMaxMin(A,n);
}
