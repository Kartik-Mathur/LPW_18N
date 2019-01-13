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

node* CreateTree(){
	int data;
	cin>>data;
	node* root;
	if(data==-1){
		return NULL;
	}
	else{
		root=new node(data);
		root->left=CreateTree();
		root->right=CreateTree();
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

void InOrder(node* root){
	if(root==NULL){
		return;
	}

	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);
}

void PostOrder(node* root){
	if(root==NULL){
		return;
	}	

	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";
}

int countNodes(node* root){
	if(root==NULL){
		return 0;
	}

	int left=countNodes(root->left);
	int right=countNodes(root->right);
	return left+right+1;
}

int height(node* root){
	if(root==NULL){
		return 0;
	}

	int left_height=height(root->left);
	int right_height=height(root->right);
	return max(left_height,right_height)+1;
}

int diameter(node* root){
	if(root==NULL){
		return 0;
	}

	int op1=height(root->left)+height(root->right);
	int op2=diameter(root->left);
	int op3=diameter(root->right);

	return max(op1,max(op2,op3));

}

class Pair{
public:
	int height;
	int diameter;

};

Pair fastDiameter(node* root){
	Pair p;
	if(root==NULL){
		p.height=p.diameter=0;
		return p;
	}

	Pair left=fastDiameter(root->left);
	Pair right=fastDiameter(root->right);

	p.height=max(left.height,right.height)+1;

	int op1=left.height+right.height;
	int op2=left.diameter;
	int op3=right.diameter;

	p.diameter=max(op1,max(op2,op3));
	return p;
}


int main(){
	node* root=CreateTree();

	PreOrder(root);
	cout<<endl;
	InOrder(root);
	cout<<endl;
	PostOrder(root);
	cout<<endl;
	cout<<"Nodes : "<<countNodes(root)<<endl;
	cout<<"Height : "<<height(root)<<endl;
	cout<<"Diameter : "<<diameter(root)<<endl;
	Pair p=fastDiameter(root);
	cout<<"Fast height : "<<p.height<<endl;
	cout<<"Fast diameter : "<<p.diameter<<endl;

	cout<<endl;
	return 0;
}