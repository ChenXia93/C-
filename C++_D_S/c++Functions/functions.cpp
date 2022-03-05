#include <iostream>
using namespace std;
//find max function
int max(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }else if(b > c){
        return b;
    }else{
        return c;
    }

}

int main(){
    int maxNumb;
    maxNumb = max(10,20,30);
    cout<<maxNumb;
    return 0;
}