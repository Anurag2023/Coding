#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data)
    {
        this -> data = data;
        this -> next = NULL;    // next = null try
    }

};

void insertAtHead(node* &head, int data){
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(node* &head, int data){
    node* value = new node(data);
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp -> next;
    }
    temp -> next = value;
}

void display(node* &head){
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}

void createCycle(node* &head,int data){
    
}

int main()
{
    cout<<"hello world"<<endl;
    //node* head = new node(10);
    node* node1 = new node(10); 
    node* head = node1;
    insertAtHead(head,5);
    insertAtTail(head,20);
    display(head);
    //print(head);
    return 0;
}