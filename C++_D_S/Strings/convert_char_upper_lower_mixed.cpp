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
    cout<<"=============================="<<endl;
    //Converting char to lowercase using ASCII code
    char s[] ="WELCOME";
    cout<<s<<endl;
    int j;
    for(j = 0; s[j] != '\0'; j++){
        if(s[j] >= 65 && s[j] <= 90){
            s[j] += 32;
        }
    }
    cout<<s<<endl;
    cout<<"=============================="<<endl;
    //converting char to Uppercase
    char ss[] ="welcome";
    cout<<"Before "<<ss<<endl;
    int k;
    for(k = 0; ss[k] != '\0'; k++){
        if(ss[k] >= 97 && ss[k] <= 122){
            ss[k] -= 32;
        }
    }
    cout<<"After "<<ss<<endl;
    cout<<"=============================="<<endl;
    cout<<"mixed lower and upper\n";
    char mixedStr [] = "WelComE";
    int m;
    for(m = 0; mixedStr[m] != '\0'; m++){
        if(mixedStr[m] >= 65 && mixedStr[m] <= 90){
            mixedStr[m] += 32;
        }else if(mixedStr[m] >= 97 && mixedStr[m] <= 122){
            mixedStr[m] -= 32;
        }else{
            cout<<"invalid data"<<endl;
        }
    }
    cout<<mixedStr<<endl;



}