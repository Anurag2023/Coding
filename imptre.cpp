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
		right = NULL;
	}
};

void levelOrderTraversal(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		if(q.top() == NULL)
		{
			cout<<endl;
			q.push(NULL);
		}
		else{
			cout<< temp -> data<<" ";
			if(root->left)
			{
				q.push(root *-> left);
			}
			if(root -> right){
				q.push(root -> right);
			}
		}
	}
	return;
}

void buildtree(node* root){
	cout<<"enter data ";
	int data;
	cin>>data;
	root = new node(data);
	if(data == -1)
		return;
	root -> left = buildtree(root -> left);
	root -> right = buildtree(root -> right);
	return;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
	// for writing in output file
	freopen("output1.txt","w",stdout);
#endif
	node* root = NULL;
	buildtree(root);
	cout<<"hello world";
	return 0;
}