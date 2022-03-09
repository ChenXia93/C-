#include<iostream>
using namespace std;
struct Stack{
    int size;
    int *arr;
    int top;

};
void create(struct Stack *st){
    cout<<"Enter arr Size:"<<endl;
    cin>>st->size;
    st->top = -1;
    st->arr = new int[st->size];
    cout<<endl;
}
void push(Stack *st, int value){
    if(st->top == st ->size -1){
        cout<<"Stack overflow"<<endl;
    }else{
        st->top++;
        st->arr[st->top] = value;
    }
}
int pop(struct Stack *st){
    int x = -1;
    if(st->top == -1){
        cout<<"stack underflow"<<endl;
    }else{
        x = st->arr[st->top--];
    }
    return x;
}
void display(struct Stack st){
    for(int i = st.top; i >= 0; i--){
        cout<<st.arr[i]<< " ";
    }
    cout<<endl;
}
int stackTop(struct Stack st) {
    if( st.top == -1){
        return -1;
    }else{
        return st.arr[st.top];
    }

}

int isFull(struct Stack st){
    if( st.top == st.size-1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct Stack st){
    if(st.top == -1){
        return 1;
    }else{
        return 0;
    }
}
int peek(struct Stack st, int pos){
    int x = -1;
    if(st.top - pos + 1 < 0){
        cout<<"invalid position"<<endl;
    }else{
        x = st.arr[st.top - pos + 1];
    }pp
    return x;
}
int main(){
    struct Stack stack;
    create(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    push(&stack, 50);
    display(stack);
    cout<<"popping elements from stack\n";
//    cout<<pop(&stack)<<endl;
//    cout<<pop(&stack)<<endl;
//    cout<<pop(&stack)<<endl;
//    cout<<pop(&stack)<<endl;
//    cout<<pop(&stack)<<endl;
    cout<<"peeking at " << peek(stack,1);

}