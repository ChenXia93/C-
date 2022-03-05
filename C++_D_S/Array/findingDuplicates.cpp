#include <iostream>
using namespace std;

int main() {
    int A[] ={1,1,2,3,4,5,6,8,8,9,9,10};
    int n = 11;
    int countDup = 0;
    int lastDuplicated = 0;
    for(int i=0; i < n; i++){
        if(A[i] == A[i + 1]){
            cout<<"duplicates: "<<A[i]<<endl;
            lastDuplicated = A[i];
            countDup++;
        }
    }
    cout<<"TotalDuplicated:"<<countDup<<"\n"<<endl;
    int bDup = 0;
    int B[] = {6,4,5,8,1,2,3,4,6,7,10};
    int bSize = 11;
    for(int i = 0; i < bSize - 1 ; i++){
        for(int j = i + 1; j < bSize - 1 ; j++){
            if(B[i] == B[j]){
                cout<<"Dup: "<<B[i]<<endl;
                bDup++;
            }
        }
    }
    cout<<"dup: "<<bDup<<endl;
}
