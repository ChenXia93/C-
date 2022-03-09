// { Driver Code Starts
//Initial Template for C
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

}*start;

void insert();


// } Driver Code Ends
//User function Template for C

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(struct Node *head, int n)
{
    struct Node *p = head;
    int length = 0;
    int x = -1;
    while(p!=NULL){
        length++;
        p = p->next;
    }
    struct Node *q = head;
    if(n > length){
        return x;
    }
    for(int i = 0; i<length - n; i++){
        q = q->next;
    }
    if(q){
        x = q->data;
    }
    return x;

}

// { Driver Code Starts.



int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        start=NULL;
        int n,k;
        scanf("%d",&n);
        scanf("%d",&k);
        insert(n);
        int res = getNthFromLast(start,k);
        printf("%d\n",res);
    }
    return 0;

}


void insert(int n)
{   int value,i;
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





// } Driver Code Ends