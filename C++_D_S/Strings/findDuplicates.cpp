#include <iostream>
using namespace std;
int findDup(char s[]){
    int i,j;
    int counter = 0 ;
    for(i = 0; i < 5; i++){
        for(j = i + 1 ; j<5 ; j++){
            if(s[i] == s[j]){
                counter++;
            }
        }
    }
    return counter;
}

int main(){
    //finding duplicates
    char dup[] ="helllolo";
    cout<<findDup(dup);
}