#include <iostream>
using namespace std;
class Stock{
private:
    int initialAmount;
    int day;
    int countTrades;
public:
    Stock(){
        initialAmount = 2500;
        day = 0;
        countTrades = 0;
    }
    Stock(int initialAmount, int day, int countTrades){
        this->initialAmount = initialAmount;
        this->day = day;
        this->countTrades = countTrades;
    }
    void display();
    void setInitialAmount(int initAmount);
    void setDay(int d);
    void setCountTrades(int cTrades);
    int getDay() const;
    int getCountTrades();
    int getInitialAmount();
    void getDayTrade(int startAmount, double percent, int times);
};

void getDayTrade(int i, double d, int i1);

void Stock::getDayTrade(int startAmount, double percent, int times){
    int total = 0;
    while(times < 253){
        total = startAmount * percent;
        startAmount = startAmount + total;
        setInitialAmount(startAmount);
        if( times % 12 == 0){
            startAmount -= 500;
            cout<<"Credit Card payment: "<<getInitialAmount()<<endl;
        }
        if(startAmount > 25000 ){
            break;
        }
        cout<<"Trade "<<times<< " Total Gain $ "<<getInitialAmount()<<endl;
        times++;
    }
    cout<<"Estimated Month: "<< times/12<<endl;
}

int Stock::getInitialAmount(){
    return this-> initialAmount;
}
int Stock::getDay() const {
    return this-> day;
}
int Stock::getCountTrades() {
    countTrades++;
    return this-> countTrades;
}
void Stock::setDay(int d){
    this-> day = d;
}
void Stock::display() {}

void Stock::setInitialAmount(int initAmount) {
    this->initialAmount = initAmount;
}
void Stock::setCountTrades(int cTrades) {
    this->countTrades = cTrades;
}

int main(){
    Stock (2500,0,0);
    Stock stock;
    stock.getDayTrade(4100, 0.08f, 1);
    cout<<stock.getInitialAmount();
    return 0;
}
