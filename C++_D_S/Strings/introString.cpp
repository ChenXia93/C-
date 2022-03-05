#include <iostream>
using namespace std;
int main(){
    //Char ASCII
    //65-90: 65 = A, 66 = B:....Z = 90 a = 97, b = 98 ....z = 122 0  = 48 ..... 9 = 57
    //finding the length of the string
    //int size = 14;
    char str[] = "Welcome to C++";
    int i;
    for(i = 0; str[i]!='\0'; i++){}
    cout<<"Length of the string is: "<<i<<endl;

}