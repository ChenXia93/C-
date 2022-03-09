#include<iostream>
#include <string>
using namespace std;
struct Node{
    int data;
    struct Node *next;

//global first
}*first = nullptr;
void create(const int a[], int n){
    int i;
    struct Node *node, *last;
    //create pointer in heap
    first = new struct Node;
    //set first node to the first index a[0]
    first->data = a[0];
    //because its only the first element, next node is NULL
    first->next = nullptr;
    //set last = first.
    last = first;

    for(i = 1; i < n; i++){
        node = new struct Node;
        //set the node data
        node->data = a[i];
        //set next to NULL
        node->next = nullptr;
        //move to the next node [] --> [] ---> []
        //previous last was first, now setting the new node to the last node
        last->next = node;
        //set the node to last node
        last = node;
    }

}
void display(struct Node *p){
    while(p != nullptr){
        cout<<p->data<<endl;
        p = p ->next;
    }
}
int count(struct Node *p){
    int counter = 0;
    while(p != nullptr){
        counter++;
        p = p-> next;
    }
    return counter;
}
int sum(struct Node *p){
    int sum = 0;
    while(p !=nullptr){
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}
int maxElement(struct Node *p){
    int max = p->data;
    while(p != nullptr){
        if( p->data > max){
            max = p -> data;
        }
        p = p->next;
    }
    return max;
}
int minElement(struct Node *p){
    int min = p->data;
    while(p != nullptr){
        if( p->data < min){
            min = p->data;
        }
        p = p->next;
    }
    return min;
}
int search(struct Node *p, int key){
    if(p == nullptr){
        return 0;
    }else {
        while (p != nullptr) {
            if (p->data == key) {
                return 1;
            }
            p = p->next;
        }
    }
    return 0;
}
//Searching inside the node
Node *searchKey(struct Node *p, int key){
    if(p == nullptr){
        return 0;
    }else {
        while (p != nullptr) {
            if (p->data == key) {

                return p;
            }
            p = p->next;
        }
    }
    return nullptr;
}

int main(){
    int a[] = {3,5,7,10,15};
    create(a,5);
    display(first);
    cout<<"total data in linkedList:"<<count(first)<<endl;
    cout<<"total sum in linkedList: "<<sum(first)<<endl;
    cout<<"Max element in LinkedList: "<<maxElement(first)<<endl;
    cout<<"Min element in LinkedList: "<<minElement(first)<<endl;
    cout<<"Search key: "<<search(first,111)<<endl;
    cout<<"Search key: "<<search(first,5)<<endl;
    return 0;

}
