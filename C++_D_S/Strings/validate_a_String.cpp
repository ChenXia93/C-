#include<iostream>
#include <string>
using namespace std;
int validate(char s[]){
    for(int i = 0; s[i] != '\0'; i++){
        if(!(s[i]>=65 && s[i]<=90) &&!(s[i]>=97 && s[i]<=122)&&!(s[i]>=48 && s[i]<=57)){
            return 0;
        }
    }
    return 1;
}
int main(){
    char s[] = "1f42??fs";
    char ss[] ="abcd4";
    cout<<validate(s)<<"\n";
    cout<<validate(ss);


}
