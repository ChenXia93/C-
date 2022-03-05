#include <iostream>
using namespace std;
struct Array{
    int *A;
    int size ;
    int length;
};
void display(struct Array arr){
    cout<<"Elements are\n";
    for(int i = 0; i < arr.length; i++){
        cout<<arr.A[i]<<"";
    }
}
int main() {
    //created in Heap
//    struct Array arr;

    struct Array arr;
    int n;
    cout<<"Enter an size of array:\n";
    cin>>arr.size;
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;
    cout<<"Enter how many numbers:\n";
    cin>>n;

    cout<<"Enter all elements\n";
    for(int i = 0; i < n; i++){
        cin>>arr.A[i];
    }
    arr.length = n;
    display(arr);
}
