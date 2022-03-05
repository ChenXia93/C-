#include <iostream>
using namespace std;
int main() {
    //2D array
    int A[3][4] = {{1,2,3,9},
                   {2,3,5,7},
                   {6,4,8,1}};

    for(int row = 0; row < 3; row++){
        for(int column = 0; column < 4; column++){
            cout<<A[row][column]<<" ";
        }
        cout<<endl;
    }

    int *p[3];
    p[0] = new int[4];
    p[1] = new int[4];
    p[2] = new int[4];
    for(int row = 0; row < 3; row++){
        for(int column = 0; column < 4; column++){
            cout<<p[row][column]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    int **ptr;
    ptr = new int*[3];
    ptr[0] = new int[4];
    ptr[1] = new int[4];
    ptr[2] = new int[4];
    for(int row = 0; row < 3; row++){
        for(int column = 0; column < 4; column++){
            cout<<ptr[row][column]<<" ";
        }
        cout<<endl;
    }




}
