#include<iostream>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    int *p = a;
    for(int i= 0; i< 5; i++){
        cout<<p<<endl;
    }

    /*
output:
0x61fef4
0x61fef4
0x61fef4
0x61fef4
0x61fef4
     */



    return 0;
}