#include <iostream>
using namespace std;

/*
Logical operators:
 &&(AND) ||(OR) !=(NOT)

Relational Operators:
 <
 <=
 >
 >=
 ==
 !=
 */

void checkAge(int age){
    if(age >= 12 && age <= 50){
        cout<<"young";
    }else{
        cout<<"not young";
    }
}

int main() {
    int getAge;
    cout<<"Enter age: ";
    cin>>getAge;
    checkAge(getAge);

    return 0;
}
