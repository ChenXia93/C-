#include<iostream>
using namespace std;
// sample recursive functions
void fun(int n){
    if( n > 0){
        cout<<n<<endl;
        fun(n-1);
    }
}
int main(){
    int x = 6;
    fun(x);
}