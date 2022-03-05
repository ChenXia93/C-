#include <iostream>
using namespace std;
void checkPalindrome(char s[]){
    int i;
    for(i = 0; s[i]!='\0'; i++){}
    i = i - 1;
    int j;
    for(j = 0; i > j; j++, i--){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

void isPalindrome(char a[]){
    string s = a;
    checkPalindrome(a);
    if(s == a){
        cout<<"palindrome";
    }else{
        cout<<"not a palindrome";
    }
}

int main(){
    //comparing a string
    char a[] ="madam";
    checkPalindrome(a);
    isPalindrome(a);
}