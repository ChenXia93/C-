#include<iostream>
#include<fstream>
using namespace std;

//converting it into template

int main()
{
//    writing in file
//    ofstream ofs("my.txt");
//    ofs<<"john"<<endl;
//    ofs<<25<<endl;
//    ofs.close();

    ifstream inFile("my.txt");
    if( !inFile.is_open()){
        cout<<"File not opened"<<endl;
    }
    string str;
    int x;
    inFile>>str;
    inFile>>x;
    inFile.close();
    cout<<str;
}