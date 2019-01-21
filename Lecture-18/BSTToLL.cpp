// BSTToLL
#include <iostream>
#include <queue>
using namespace std;


class node{
public:
	int data;
	node* left;
	node* right;

	node(int d):data(d),left(NULL),right(NULL){

	}
};

node* InsertInBST(node* root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}

	if(root->data>=data){
		root->left=InsertInBST(root->left,data);
	}
	else{
		root->right=InsertInBST(root->right,data);
	}
	return root;
}


node* BST(){

	int data;
	cin>>data;
	node* root=NULL;
	while(data!=-1){
		root=InsertInBST(root,data);
		cin>>data;
	}

	return root;
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

void LevelOrder(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left!=NULL){
				q.push(temp->left);
			}
			if(temp->right!=NULL){
				q.push(temp->right);
			}
		}
	}
}

class linkedlist{
public:
	node* head;
	node* tail;
};


linkedlist BSTtoLL(node* root){
	linkedlist l;
	if(root==NULL){
		l.head=l.tail=NULL;
		return l;
	}

	if(root->left!=NULL && root->right==NULL){
		linkedlist left=BSTtoLL(root->left);

		left.tail->right=root;
		l.head=left.head;
		l.tail=root;
		return l;
	}
	else if(root->left==NULL && root->right!=NULL){
		linkedlist right=BSTtoLL(root->right);

		root->right=right.head;
		l.head=root;
		l.tail=right.tail;
		return l;
	}
	else if(root->right==NULL && root->left==NULL){
		l.head=l.tail=root;
		return l;
	}
	else{
		linkedlist left=BSTtoLL(root->left);
		linkedlist right=BSTtoLL(root->right);

		left.tail->right=root;
		root->right=right.head;

		l.head=left.head;
		l.tail=right.tail;
		return l;
	}

}


void print(node* head){

	while(head){
		cout<<head->data<<"-->";
		head=head->right;
	}
	cout<<endl;
}


int main(){
	node* root=BST();
	LevelOrder(root);
	linkedlist l=BSTtoLL(root);
	print(l.head);

	cout<<endl;
	return 0;	
}