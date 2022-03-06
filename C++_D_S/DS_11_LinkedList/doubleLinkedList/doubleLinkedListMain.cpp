#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
}*first = nullptr;

void create(int a[], int n) {
    struct Node *t, *last;
    int i;
    first = new Node;
    first->data = a[0];
    first->prev = nullptr;
    first->next = nullptr;
    last = first;

    for (i = 1; i < n; i++) {
        t = new Node;
        t->data = a[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p){
        int i = 0;
        while(p){
            cout<<"i:"<<i<<" = "<<p->data<<endl;
            p= p->next;
            i++;
        }
    cout<<endl;
}

int length(struct Node *p){
    int len = 0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}
void insert(struct Node *p, int index, int element){
    struct Node *t;
    int i;
    if(index < 0 || index > length(p)){
        cout<<"out of bounds\n";
    }
    if(index == 0){
        t = new Node;
        t->data = element;
        t->prev = nullptr;
        t->next = first;
        first->prev = t;
        first = t;
    }else{
        for(i = 0 ; i < index - 1; i++){
            p = p->next;
        }
        t = new Node;
        t->data = element;
        t->next = p -> next;
        if(p ->next){
            p->next->prev = t;
        }
        p->next = t;
    }
}
int remove(struct Node *p,int index){
    int x;
    p = first;
    if(index == 0){
        first  = first->next;
        if(first){
            first->prev = nullptr;
        }
        x = p->data;
        free (p);
    }else{
        p = first;
        for(int i = 0; i < index; i++){
            p = p->next;
        }
        p->prev->next = p->next;
        if(p->next){
            p->next->prev = p->prev;
        }
        x = p->data;
        free (p);
    }
    return x;
}

void reverse(struct Node *p){
    struct Node *temp;
    while(p!=nullptr){
    temp = p->next;
    p->next = p->prev;
    p->prev = temp;
    p = p->prev;
    if(p!=nullptr && p->next == nullptr){
        first = p;
        }
    }
}

int main(){
    int A[] = {5,5,6,8,4,2,6};
    create(A,7);
    display(first);
    cout<<"inserting elements\n";
    display(first);
    cout<<"deleting element\n";
    cout<<remove(first, 0) << "\n";
    display(first);
    cout<<"displaying in reverse\n";
    reverse(first);
    display(first);

}
