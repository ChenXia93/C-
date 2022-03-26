#include<iostream>
using namespace std;

struct Node{
    char data;
    struct Node *link;
};

struct Stack{
    struct Node *top;
    Stack(){
        top = nullptr;
    }
    void push(char x);
    char pop();
    void display() const;
    int stackTop() const;
    int isEmpty();
    static int isFull();
    static int isBalance(char *exp);
};
void Stack :: push(char x){
    Node *t = new Node;
    t->data = x;
    t->link = top;
    top = t;
}
char Stack :: pop(){
    char x = -1;
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
int Stack:: isBalance(char *exp){
    int i;
    auto *st = new Stack;
    for(i = 0; exp[i]!='\0'; i++){
        if(exp[i] == '('||exp[i] == '{'||exp[i] == '['){
            st->push(exp[i]);
        }else if(exp[i] ==')'||exp[i] =='}'||exp[i] ==']'){
            if(st->isEmpty()){
                return 0;
            }
            st->pop();
        }
    }
    if(st->top == nullptr){
        return 1;
    }else{
        return 0;
    }
}


int main(){
    Stack *stack = new Stack;
    char *exp = "{([a+b]*[c-d])}";
    cout<<"isBalanced: "<<stack->isBalance(exp);
    stack->display();
    return 0;


}