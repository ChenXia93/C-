#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *link;
};

struct Stack{
    struct Node *top;
    Stack(){
        top = nullptr;
    }void push(int x);
    int pop();
    void display() const;
    int stackTop() const;

    int isEmpty();

    int isFull();
};
void Stack :: push(int x){
    Node *t = new Node;
    t->data = x;
    t->link = top;
    top = t;
}
int Stack :: pop(){
    int x = -1;
    if(top == nullptr){
        cout<<"Stack is empty\n";
    }else{
        x = top->data;
        Node *t = top;
        top = top->link;
        free(t);
    }
    return x;
}

void Stack::display() const{
    Node *p = top;
    while(p!=nullptr){
        cout<<"data :" << p->data<<endl;
        p = p->link;
    }
};

int Stack::stackTop() const{
    if(top){
        return top->data;
    }else{
        return -1;
    }
}

int Stack:: isEmpty(){
    return top ? 0 : 1;
}

int Stack:: isFull(){
    Node *t = new Node;
    int r = t ? 1: 0;
    free(t);
    return r;
}


int main(){
    Stack stk;
    cout<<"Before....\n";
    stk.push(10);
    stk.push(20);
    stk.display();
    cout<<"After....\n";
    cout << "top of stack is: " << stk.stackTop() << endl;
    cout<<"popping a value from Stack: "<<stk.pop() << endl;
    stk.display();
    cout<<"is full? " << stk.isFull()<<endl;

}