#include <iostream>
using namespace std;
/*
 * If a class has a constructor which can be called with a single arugment, then this constructor becomes conversion constructor
 * because such a constructor allows automatic conversion to the class being constructed.
 *
 */
class MyClass {
    int a, b;

public:
    MyClass(int i)
    {
        a = i;
        b = i;
    }
    void display() const
    {
        cout << " a = " << a << " b = " << b << "\n";
    }
};

int main()
{
    MyClass object(10);
    object.display();

    // Single parameter conversion constructor is invoked.
    object = 20;
    object.display();
    object = 30;
    object.display();
    return 0;
}