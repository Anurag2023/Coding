#include<iostream>
using namespace std;


class node{
    public:
        int data;
        node* next;

    //constructor
        node(int data){
            this -> data = data;
            this -> next = NULL;
    }
    // destructor
    ~node(){
        int value = this -> data;
       // memory free
        if(this -> next != NULL){
            
            this -> next = NULL;
            delete next;           
        }
        cout<<"memory is free for node with data : "<<value<<endl;
    }
};



void insertAtHead(node* &head , int data){
    node* temp = new node(data);
    temp -> next = head;
    head = temp;

}

void insertAtTail(node* &tail , int data){
    node* temp = new node(data);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtPosition(node* tail , node* &head , int position , int data){
    node* insert = new node(data);
    node* temp = head;
    int c=1;

    // insert at head

    if(position == 1){
        insertAtHead(head , data);
        return;
    }
    while(c<position){
        temp = temp -> next;
        c++;
    }

    // insert at last

    if(temp-> next == NULL){
        insertAtTail(tail , data);
        return;
    }

    // insert at position

    insert -> next = temp -> next;
    temp -> next = insert;

}

void deleteNode(node* &tail , node* &head , int position){
    if(position == 1){
        node* temp = head;
        head = temp -> next;
        delete temp;
    }
    else{ 
    int count = 1;
    node* curr = head;
    node* prev = NULL;
    while(count<position){
        prev = curr;
        curr = curr -> next;
        count++;
    }
    prev -> next = curr -> next;
    if(prev -> next == NULL){
        tail = prev;
    }
    delete curr;
    }
}

void display(node* &head){
    node* temp = head; 

    while(temp != NULL){
        cout<<temp -> data<<"  ";
        temp = temp -> next;
    }

}


int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    insertAtHead(head , 5);
    insertAtTail(tail , 30);
    insertAtTail(tail , 40);
    insertAtTail(tail , 50);
  
    
    insertAtTail(tail , 25);
    insertAtPosition(tail , head , 4 , 55);
  
    display(head);
    cout<<endl;
    cout<<"head : "<<head -> data<<endl;
    cout<<"tail : "<<tail -> data<<endl;

    deleteNode(tail , head , 7);
    display(head);
    cout<<endl<<"head : "<<head -> data<<endl;
    cout<<"tail : "<<tail -> data<<endl;
  //  return 0;
}

