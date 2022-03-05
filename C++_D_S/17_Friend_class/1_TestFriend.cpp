#include<iostream>
using namespace std;
class Test{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend int main();
};

int main()
{
    Test t;
    //cant access private member
    t.a = 10;
    //cant access protected member
    t.b = 20;
    t.c = 30;
    cout<<t.a<<endl;
}