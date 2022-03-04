#include<iostream>
#include <fstream>
using namespace std;
int main(){
    string fileName = "stats.txt";
    ifstream input;

    input.open(fileName);
    if(!input.is_open()){
        return 1;
    }
    while(input){
        string line;
        getline(input, line,':');
        int pop;
        input>>pop;
        input.get();
        cout<<line<<":"<<" "<<pop<<endl;
    }
    input.close();
    cout<<"hi"<<endl;
    return 0;
}