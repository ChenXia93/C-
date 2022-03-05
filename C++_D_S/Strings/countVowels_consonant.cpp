#include <iostream>
using namespace std;
int main(){
    //counting vowels and consonant
    char s[] = "how are you doing";
    int i, vCount =0, cCount = 0, word = 1;
    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == 'a' ||s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'||
           s[i] == 'u'||s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U'){
            vCount++;
        }else if(s[i] >= 65 && s[i] <= 90 || s[i] >= 97 & s[i] <= 122){
            cCount++;
        }else if(s[i] == ' ' || s[i - 1] != ' '){
            word++;
        }
    }
    cout<<vCount<< " " << cCount<<" "<<word<<endl;

}