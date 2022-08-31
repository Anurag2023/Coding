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
        this -> left = NULL;
        this -> right = NULL;
    }
};

void printtree(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);   //1 3 5 -1 6 -1 -1 7 -1 -1 11 13 -1 -1 -1

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
        else{
            cout<<temp -> data<<" ";
            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
       
    }
}

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

int main()
{
    node* root = NULL;
    root = buildtree(root);
    printtree(root);
    return 0;
}