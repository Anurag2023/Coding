#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    //constructor
    node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
    ~node(){
        if(next != NULL)
        {
            next = NULL;
            delete next;
        }
    }
};

void insertAtHead(node* &head , int data){
    node* temp = new node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertAtTail(node* &tail , int data){
    node* temp = new node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;

}

void insertAtPosition(node* &tail , node* &head , int position , int data){
   node* temp = head;
   // insert at head
   if(position == 1){
    insertAtHead(head , data);
    return;
   }
   int count = 1;
   while(count < position - 1){
    count++;
    temp = temp -> next;
   }
   // insert at last
   if(temp -> next == NULL){
    insertAtTail(tail , data);
    return;
   }
    // insert at position
    node* insert = new node(data);
    insert -> prev = temp;
    temp -> next -> prev = insert;
    insert -> next = temp -> next;
    temp -> next = insert; 
}

void deleteNode(int)

void display(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    
    insertAtHead(head , 5);     // insert at head
    
    cout<<endl<<"head : "<<head -> data<<endl;
    cout<<"tail : "<<tail -> data<<endl;
    
    display(head);
    
    insertAtTail(tail , 55);        // insert at tail
    
    cout<<endl<<"head : "<<head -> data<<endl;
    cout<<"tail : "<<tail -> data<<endl;
   
   // insertAtPosition(head , tail , 3);
   // deleteNode(4);
   
    display(head);

    insertAtPosition(tail , head , 2 , 69);
    display(head);
    insertAtPosition(tail , head , 1 , 60);
    display(head);
    insertAtPosition(tail , head , 6 , 699);

    display(head);

    return 0;
}