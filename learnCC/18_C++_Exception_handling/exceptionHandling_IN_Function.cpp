#include<iostream>
using namespace std;
int divide(int x, int y){
    if (y == 0){
        throw 1;
    }else{
        return x / y;
    }
}
int main()
{
    int a = 10,  b = 0, c = 0;
    try{
        //if b == 0 , it will throw exception
        //else it will perform divide 
        c =divide(a,b);
        cout<<"c :"<<c<<endl;

    }catch (int e){
        cout<<"Division by zero is not allowed"<<endl;
    }
    cout<<"bye"<<endl;

}