#include <iostream>
#include<vector>
#include<numeric>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"enter data : ";
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)
        return NULL;
    cout<<"enter left of "<<data<<endl;
    root -> left = buildTree(root -> left);
    cout<<"enter right of "<<data<<endl;
    root -> right = buildTree(root -> right);
    return root;
}

void print(node* root){
    while(root)
}

int main(){
    node* root = NULL;
    buildTree(root);
    return 0;
}