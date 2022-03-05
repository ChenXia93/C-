#include <iostream>
using namespace std;
int main() {
    int *p;
    p = new int[5];
    p[0] = 1;
    p[1] = 1;
    p[2] = 1;
    p[3] = 1;
    p[4] = 1;
    //create a new heap array
    int *q = new int[10];
    //copy p into q
    for(int i = 0; i<5;i++){
        q[i] = p[i];
    }
    //delete the p
    delete[] p;
    //set p = q
    p = q;
    //set q = nullptr
    q = nullptr;

    for(int i = 0; i<10; i++){
        cout<<p[i]<<" ";
    }
    return 0;
}
