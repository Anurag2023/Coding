#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this -> data = data;
        this -> right = NULL;
        this -> left = NULL;
    }
};


node* buildtree(node* root)
{
    

    cout<<endl<<"enter data : ";
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)
        return NULL;
    cout<<"enter left of data : "<<data;
    root -> left = buildtree(root -> left);
    cout<<"enter right of data : "<<data;
    root -> right = buildtree(root -> right);
    return root;
}

node* printtree(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    
}

int main()
{
    node* root = NULL;
    buildtree(root);
    

    return 0;
}