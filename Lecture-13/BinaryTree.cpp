// BinaryTree
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d):data(d),left(NULL),right(NULL){

	}
};


node* buildTree(){
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	else{
		node* root=new node(data);
		root->left=buildTree();
		root->right=buildTree();
		return root;
	}
}

void PreOrder(node* root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}



int main(){
	node* root=buildTree();
	PreOrder(root);
















	cout<<endl;     
	return 0;
}