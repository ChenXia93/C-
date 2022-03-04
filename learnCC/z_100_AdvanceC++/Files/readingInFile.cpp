#include<iostream>
#include <fstream>
using namespace std;
//Exception Basics
int main(){
    //ofstream outFile
    //writing file
    ofstream outFile;
    string fileName = "text.txt";
    //open up the txt
    outFile.open(fileName,ios::out);
    if(outFile.is_open()){
        outFile<<"Hello"<<endl;
        outFile<<123<<endl;
        outFile.close();
    }else{
        cout<<"File not opened"<<endl;
    }
    string line;
    ifstream inFile;
    inFile.open(fileName);
    if(inFile.is_open()){
        while(inFile){
            getline(inFile,line);
            cout<<line;
        }
        inFile.close();
    }

}