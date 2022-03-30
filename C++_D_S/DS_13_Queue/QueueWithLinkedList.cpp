#include<iostream>
using namespace  std;

struct Node{
    int data;
    struct Node *next;
}*front = nullptr,*rear = nullptr;

void enQueue(int x){
    struct Node *newNode;
    newNode = new Node;
    if(newNode == nullptr){
        cout<<"Queue is full\n";
    }else{
        newNode->data = x;
        newNode->next = nullptr;
        if(front == nullptr){
            front = rear = newNode;
        }else{
            rear->next = newNode;
            rear = newNode;
        }
    }
}

int deQueue(){
    int x = -1;
    struct Node *p;
    if(front == nullptr){
        cout<<"Queue is empty\n";
    }else{
        p = front;
        front = front->next;
        x = p->data;
        free(p);
    }
    return x;
}

void display(){
    struct Node *p = front;
    while(p){
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main(){
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);

    display();
}

