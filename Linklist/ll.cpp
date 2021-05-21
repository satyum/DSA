#include <bits/stdc++.h>

using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int val)
        {
            data=val;
            next=NULL;
        }
};

void insertAtTail(node* &head, int val)
{
    node *n=new node(val);
    if(head==NULL)
    {
        head=n;
        return ;
    }

    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void display(node *head)
{
node *temp=head;
while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(node* head,int key)
{
    node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key);
            return true;
        temp=temp->next;
    }

    return false;
}

void deletehead(node* &head)
{
    node *del=head;
    head=head->next;

    delete del;
}

void deletion(node* &head,int val)
{
    if(head==NULL) return ;
    if(head->next==NULL)
       deletehead(head); 
       return;

    node *temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node *deletenode=temp->next;
    temp->next=temp->next->next;

    delete deletenode;
}

node* reverse(node* &head)
{
node* previousptr=NULL;
node* currentptr=head;
node*  nextptr;
while(currentptr!=NULL)
    {
        nextptr=currentptr->next;
        currentptr->next=previousptr;

        previousptr=currentptr;
        currentptr==nextptr;
    }
        return previousptr;
}

int main(){

node *head=NULL;
insertAtTail(head,101);
insertAtTail(head,102);
insertAtTail(head,103);
insertAtTail(head,104);
display(head);
//deletehead(head);
//reverse(head);
//deletion(head,102);
node* newhead=reverse(head);
display(newhead);

 
    
return 0;
}

