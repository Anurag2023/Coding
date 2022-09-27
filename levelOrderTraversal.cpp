#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this -> data = data;
        left = NULL;
        this -> right = NULL;
    }
};

node* buildtree(node* root)
{
    cout<<"enter data : "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)
        return NULL;
    cout<<"enter left data of "<<data<<endl;
    root -> left = buildtree(root->left);
    cout<<"enter right data of "<<data<<endl;
    root -> right = buildtree(root->right);
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    
}

int main(){
    node* root = NULL;
    buildTree(root);
    levelOrderTraversal(root);

    return 0;
}