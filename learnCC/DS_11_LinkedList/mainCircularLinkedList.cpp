#include<iostream>
using namespace std;
struct Node{
   int data;
   struct Node *next;
}*Head;

void creat(int A[], int n){
    int i;
    struct Node *t, *last;
    Head = new Node();
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for(i = 1; i< n;i++){
        t = new Node();
        t->data = A[i];
        t->next = last->next;
        last -> next =t;
        last = t;
    }

}

void display(struct Node *h){
    do{
        cout<<"data: " << h ->data<<endl;
        h = h ->next;
    }while(h != Head);
    cout<<endl;
}

void recursiveDisplay(struct Node *h){
    static int flag = 0;
    if(h != Head || flag == 0){
        flag = 1;
        cout<<"Data: "<< h->data<<endl;
        recursiveDisplay(h->next);
    }
    flag = 0;
}

int main(){
    int A[] = {2,3,4,5,6};
    creat(A, 5);
    display(Head);
    cout<<endl;
    recursiveDisplay(Head);

}