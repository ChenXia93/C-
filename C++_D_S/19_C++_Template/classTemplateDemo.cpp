#include<iostream>
using namespace std;
//converting it into template
template<class T>
class Stack{
private:
    T *stk;
    int top;
    int size;
public:
    Stack(int size){
        this->size = size;
        top = -1;
        stk = new int[size];
    }
    void push(T x);
    T pop();
};
template<class T>
void Stack<T>::push(T x){
    if(top == size -1){
        cout<<"DS_12_Stack is full"<<endl;
    }else{
        top++;
        stk[top] = x ;
    }
}
template<class T>
T Stack<T> :: pop(){
    T x = 0;
    if(top == -1){
        cout<<"DS_12_Stack is empty"<<endl;
    }else{
        x = stk[top];
        top--;
    }
    return x;
}
int main()
{
    Stack<int> s(10);
    s.push(10);
    s.push(1);
    s.push(2);
    s.push(12);
    s.pop();


}