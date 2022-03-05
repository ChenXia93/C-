#include<iostream>
using namespace std;
class your;
class My{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend your;

};
class your{
public:
    My m;
    void fun(){
        m.a = 10;
        m.b = 20;
        m.c = 30;
    }
};
int main()
{
    your y;
    y.fun();

    return 0;
}