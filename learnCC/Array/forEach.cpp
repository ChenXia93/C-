#include<iostream>
using namespace std;

void Display()
{
    int A[]={2,4,6,8,10};
    for(int x : A)
    {
        cout<<x<<" ";
    }
    //use foreach loop to display all emelents from Array;

}

#include <iostream>
using namespace std;

int main(){
    //for each using reference
    int a[5] = {1,2,3,4,5};
    for(int &x: a){
        cout<<+x<<endl;
    }

    /*
     * output:
        2
        3
        4
        5
        6
     */

    return 0;
}