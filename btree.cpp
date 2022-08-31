#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data)
    {
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};


void buildtree(node* root)
{
    if(root == -1)
        return NULL;
    
}

int main()
{
    node* root = NULL;
    buildtree(root);
    

    return 0;
}