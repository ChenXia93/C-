#include<iostream>
#include <string>
using namespace std;
struct Node{
    int data;
    struct Node *link;

//global headNode
}*headNode = nullptr;
void create(const int a[], int n){
    int i;
    struct Node *current, *last;
    //create pointer in heap
    headNode = new struct Node;
    //set headNode current to the headNode index a[0]
    headNode->data = a[0];
    //because its only the headNode element, link current is NULL
    headNode->link = nullptr;
    //set last = headNode.
    last = headNode;

    for(i = 1; i < n; i++){
        current = new struct Node;
        //set the current data
        current->data = a[i];
        //set link to NULL
        current->link = nullptr;
        //move to the link current [] --> [] ---> []
        //previous last was headNode, now setting the new current to the last current
        last->link = current;
        //set the current to last current
        last = current;
    }

}
void display(struct Node *p){
    while(p != nullptr){
        cout<<p->data<<endl;
        p = p ->link;
    }
}
int count(struct Node *p){
    int counter = 0;
    while(p != nullptr){
        counter++;
        p = p-> link;
    }
    return counter;
}
int sum(struct Node *p){
    int sum = 0;
    while(p !=nullptr){
        sum = sum + p->data;
        p = p->link;
    }
    return sum;
}
int maxElement(struct Node *p){
    int max = p->data;
    while(p != nullptr){
        if( p->data > max){
            max = p -> data;
        }
        p = p->link;
    }
    return max;
}
int minElement(struct Node *p){
    int min = p->data;
    while(p != nullptr){
        if( p->data < min){
            min = p->data;
        }
        p = p->link;
    }
    return min;
}
int search(struct Node *p, int key){
    if(p == nullptr){
        return 0;
    }else {
        while (p != nullptr) {
            if (p->data == key) {
                return key;
            }
            p = p->link;
        }
    }
    return -key;
}
int deleteValue(struct  Node *p, int position){
        struct Node *q;
        int value;
        if(position < 1 || position > count(p)){
            return -1;
        }
        if(position == 1){
            q = headNode;
            value = headNode->data;
            headNode = headNode->link;
            delete q;
            return value;
        }else{
            for(int i = 0; i <position -1; i++){
                q = p;
                p = p->link;
            }
            q->link = p ->link;
            value = p -> data;
            free(p);
            return value;

        }
}
void insert(struct Node *p, int position, int value){
    struct Node *t;
    if(position == 0){
        t = new Node;
        t->data = value;
        t->link = headNode;
        headNode = t;
    } else if(position > 0){
        for(int i = 0; i < position -1 && p; i++){
            p = p->link;
        }
        if(p){
            t = new Node;
            t->data = value;
            t->link = p ->link;
            p->link = t;
        }
    }

}
int checkSort(struct Node *p){
   int x = -32768;
   while(p != nullptr){
       if( p->data < x){
           return false;
       }
       x = p->data;
       p = p->link;
   }
   return true;
}

void sortedInsert(struct Node *p, int value){
    struct Node *t, *q  = NULL;
    t = new Node;
    t->data = value;
    t->link = NULL;
    if(headNode == NULL){
        headNode = t;
    }else{
        while(p && p->data < value){
            q = p;
            p = p->link;
        }
        if(p == headNode){
//            cout<<matrix->data<<endl;
//            cout<<headNode->data<<endl;
            t->link = headNode;
            headNode = t;
        }else{
            t->link = q ->link;
            q->link = t;
        }
    }
}


//Searching inside the node
struct Node *searchKey(struct Node *p, int key){
    if(p == nullptr){
        return 0;
    }else {
        while (p != nullptr) {
            if (p->data == key) {
                return p;
            }
            p = p->link;
        }
    }
    return nullptr;
}
void removeDup(struct Node *p){
    Node *q = p->link;
    while(q !=nullptr){
        if(p->data != q->data){
            p = q;
            q = q->link;
        }else{
            p->link = q->link;
            free(q);
            q = p->link;
        }
    }
}
void reverse1(struct Node *p){
    int *A;
    int i = 0;
    struct Node *q = p;
    A = new int[7];
    while(q !=nullptr){
        A[i] = q->data;
        q = q->link;
        i++;
    }
    q = p;
    i--;
    while(q !=nullptr){
        q->data = A[i];
        q = q->link;
        i--;
    }

}

int main(){
    int a[] = {3,5,5,7,10,15,15};
    create(a,7);
    reverse1(headNode);
    cout<<endl;
    display(headNode);
//    removeDup(headNode);
    cout<<endl;
//    deleteValue(headNode, 1);
//    cout<<"is the linked list sorted: "<<checkSort(headNode)<<endl;
    display(headNode);
    reverse1(headNode);
    cout<<endl;
//    sortedInsert(headNode,35);
//    sortedInsert(headNode,35);
    cout << "total data in linkedList:" << count(headNode) << endl;
    cout << "total sum in linkedList: " << sum(headNode) << endl;
    cout << "Max element in LinkedList: " << maxElement(headNode) << endl;
    cout << "Min element in LinkedList: " << minElement(headNode) << endl;
    cout << "Search key: " << search(headNode, 15) << endl;
    cout << "Search key: " << search(headNode, 5) << endl;
//    cout<<"inserting a value:";
//    insert(headNode, 2, 10);
    cout<<endl;
    display(headNode);
    return 0;

}
