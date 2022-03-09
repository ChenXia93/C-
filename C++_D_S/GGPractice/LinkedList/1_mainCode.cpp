//
// Created by chen on 3/9/2022.
//

// { Driver Code Starts
//Initial Template for C
#include<stdio.h>
#include<stdlib.h>
#include<istream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

}*start;

void insert();
void display(struct Node *head);

// } Driver Code Ends
//User function Template for C

//struct Node* reverseList(struct Node *head)
//{
//    struct Node*p=NULL,*q=NULL,*r=NULL;
//    p = head;
//    while(p!=nullptr){
//        r = q;
//        q = p;
//        p = p->next;
//        q->next =r;
//    }
//    head = q;
//}
struct Node*reverseList(struct Node *head)
{
    Node*curr = head,*prev = NULL,*nxt = NULL;
    while(curr){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}
// { Driver Code Starts.

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        start=NULL;
        insert();
        start = reverseList(start);
        display(start);
        printf("\n");
    }
    return 0;

}


void insert()
{
    int n,value,i;
    scanf("%d",&n);
    struct Node *temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        if(i==0)
        {
            start=(struct Node *) malloc( sizeof(struct Node) );
            start->data=value;
            start->next=NULL;
            temp=start;
            continue;
        }
        else
        {
            temp->next= (struct Node *) malloc( sizeof(struct Node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}

void display(struct Node *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}




// } Driver Code Ends