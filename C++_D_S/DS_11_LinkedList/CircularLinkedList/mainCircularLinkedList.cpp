   #include<iostream>
using namespace std;
struct Node{
   int data;
   struct Node *next;
}*Head;

void creat(const int A[], int n){
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
int Length(struct Node *p){
       int len=0;
       do
       {
           len++;
           p=p->next;
       }while(p!=Head);
       return len;
   }

int remove(struct Node *p, int position){
    int x;
    struct Node *q;
    if(position < 0 || position > Length(Head)){
        return -1;
    }
    if(position == 0){
        x = Head->data;
        if(p == Head){
            free (Head);
            Head = nullptr;
        }else{
            p->next = Head->next;
            free (Head);
            Head = p->next;
        }
    }else{
        for(int i = 0; i < position - 1; i++){
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        x = q->data;
        free (q);
    }
 return x;
}


void insert(int position , int value){
    Node *t, *p;
    if(position == 0){
        t = new Node;
        t->data = value;
        if(Head == nullptr){
        Head = t;
        Head ->next = Head;
        }else{
            p = Head;
            while( p->next != Head){
                p = p ->next;
            }
            t = new Node;
            t->data = value;
            p->next = t;
            t->next = Head;
            Head = t;
        }
    }else{
        for(int i = 0; i < position - 1; i++){
            p = p->next;
        }
        t = new Node;
        t->data = value;
        t->next = p->next;
        p->next = t;
    }
}



int main(){
    int A[] = {8,3,9,6,2};
    creat(A, 5);
    display(Head);
    cout<<"deleting ... "<<remove(Head,1);
    cout<<endl;
//    cout<<"inserting....\n"<<endl;
//    insert(0,10);
//    display(Head);
}


