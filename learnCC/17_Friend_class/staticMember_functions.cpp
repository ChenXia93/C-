#include<iostream>
using namespace std;
class Toyota{
public:
    static int price;
    Toyota(){};
    static int getPrice(){
        return price;
    }
};
int Toyota:: price = 20;

int main()
{
    //Static members, functions can be use as counters, share members and get information
    Toyota toyota;
    cout<<toyota.getPrice();

    return 0;
}