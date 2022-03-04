#include<iostream>
#include<fstream>
using namespace std;

//converting it into template

int main()
{
    //writing in file
    ofstream ofs("my.txt");
    ofs<<"john"<<endl;
    ofs<<25<<endl;
    ofs.close();

}