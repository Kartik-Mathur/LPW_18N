// BST
#include <iostream>
#include <queue>
#include <climits>
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

node* SearchInBST(node* root,int key){
	if(root==NULL){
		return NULL;
	}

	if(root->data==key){
		return root;
	}
	else if(root->data>key){
		return SearchInBST(root->left,key);

	}
	else{
		return SearchInBST(root->right,key);
	}

}

// void PrintRange(node* root,int k1,int k2){
// 	if(root==NULL){

// 	}

// 	if(r->data>=k1 && <=k2){

// 	}

// }

bool isBST(node* root,int min=INT_MIN,int max=INT_MAX){
	if(root==NULL){
		return true;
	}

	if(root->data<=max && root->data>=min && isBST(root->left,min,root->data) && isBST(root->right,root->data,max)){
		return true;
	}
	else{
		return false;
	}

}

class Pair{
public:
	int height;
	bool balance;
};

Pair Balanced(node* root){
	Pair p;
	if(root==NULL){
		p.height=0;
		p.balance=true;
		return p;
	}
	Pair left=Balanced(root->left);
	Pair right=Balanced(root->right);

	p.height=max(left.height,right.height)+1;
	if(left.balance && right.balance && abs(left.height-right.height)<=1){
		p.balance=true;
	}
	else{
		p.balance=false;
	}
	return p;
}

node* ArrayToBST(int *a,int s,int e){
	if(s>e){
		return NULL;
	}

	int mid=(s+e)/2;
	node* root=new node(a[mid]);
	root->left=ArrayToBST(a,s,mid-1);
	root->right=ArrayToBST(a,mid+1,e);
	return root;
}

int main(){
	int a[]={1,2,5,6,7,8,9};
	int n=sizeof(a)/sizeof(int);

	node* root=ArrayToBST(a,0,n-1);
	PreOrder(root);
	cout<<endl;
	LevelOrder(root);
	node*ans=SearchInBST(root,-1);
	// if(ans){
	// 	cout<<ans->data<<endl;
	// }
	// else{
	// 	cout<<"Not found!"<<endl;
	// }
	// if(isBST(root)){
	// 	cout<<"BST"<<endl;
	// }
	// else{
	// 	cout<<"Not BST!"<<endl;
	// }

	// Pair p=Balanced(root);
	// if(p.balance){
	// 	cout<<"Balanced"<<endl;
	// }
	// else{
	// 	cout<<"Not Balanced"<<endl;
	// }
	cout<<endl;
	return 0;
}