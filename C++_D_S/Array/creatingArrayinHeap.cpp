#include <iostream>
using namespace std;
int main() {
    //array in heap using pointer
    int *p;
    p = new int[5];
    p[0] = 1;
    p[1] = 1;
    p[2] = 1;
    p[3] = 1;
    p[4] = 1;

    for(int i = 0; i<5;i++){
        cout<<p[i]<<" ";
    }
    return 0;
}
