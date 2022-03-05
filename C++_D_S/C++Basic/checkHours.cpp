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

void working(int hour){
    if(hour >= 9 && hour <= 18){
        cout<<"working";
    }else{
        cout<<"leisure";
    }

}

int main() {
    int hours;
    cout<<"Enter hours: ";
    cin>>hours;
    working(hours);
    return 0;
}
