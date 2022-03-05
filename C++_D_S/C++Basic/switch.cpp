#include <iostream>
using namespace std;
void dayName(int day){
    if(day == 1){
        cout<<"sun";
    }else if(day == 2){
        cout<<"mon";
    }else if(day == 3){
        cout<<"tue";
    }else if(day == 4){
        cout<<"wed";
    }else if(day == 5){
        cout<<"thur";
    }else if(day == 6){
        cout<<"fri";
    }else{
        cout<<"sat";
    }
}

void day_Name(int day){
    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        default:
            cout<<"Invalid day"<<endl;
    }
}

void arithmeticMenu(int x, int y, int choice){
    int total = 0;
    switch(choice){
        case 1:
            total = x + y;
            cout<<"total is: "<<total<<endl;
            break;
        case 2:
            total = x - y;
            cout<<"total is: "<<total<<endl;
            break;
        case 3:
            total = x / y;
            cout<<"total is: "<<total<<endl;
            break;
        case 4:
            total = x * y;
            cout<<"total is: "<<total<<endl;
            break;
        case 5:
            total = x % y;
            cout<<"total is: "<<total<<endl;
            break;
        default:
            cout<<"Invalid input."<<endl;
    }

}

int main(){

    dayName(5);
    cout<<endl;
    day_Name(2);
    cout<<"1: Addition\n"<<"2: Subtraction\n"<<"3: Division\n"<<"3: multiple\n"<<"5: mod\n"<<endl;
    int x, y, choices;
    cin>>x>>y>>choices;
    arithmeticMenu(x,y,choices);

    return 0;
}//
// Created by chen on 1/27/2022.
//

