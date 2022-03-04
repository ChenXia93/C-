#include<iostream>
using namespace std;


//1. write a sum() function here to add 2 integer
//2. write a sum() function here to add 2 floats
//3. write a sum() function here to add 3 integer
int sum(int x, int y){
    return x + y;
}
float sum(float x, float y){
    return x + y;
}

int sum(int x, int y, int z){
    return x + y + z;
}


int main()
{
    cout<<sum(10,5)<<endl;
    cout<<sum(12.9f,8.3f)<<endl;
    cout<<sum(10,20,30);

    return 0;
}
