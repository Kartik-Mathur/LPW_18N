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

node* LevelInput(){
	int data;
	cout<<"Enter root node : ";
	cin>>data;
	node* root=new node(data);
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		cout<<"Enter child of "<<temp->data<<" : ";
		int c1,c2;
		cin>>c1>>c2;

		if(c1!=-1){
			temp->left=new node(c1);
			q.push(temp->left);
		}
		if(c2!=-1){
			temp->right=new node(c2);
			q.push(temp->right);
		}
	}
	return root;
}


void mirror(node* root){
	if(root==NULL){
		return;
	}

	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}
int indx=0;

node* makeTree(int *in,int *pre,int s,int e){
	if(s>e){
		return NULL;
	}

	int data=pre[indx];
	indx++;
	node* root=new node(data);
	
	int k;
	for(int i=s;i<=e;i++){
		if(in[i]==data){
			k=i;
			break;
		}
	}
	root->left=makeTree(in,pre,s,k-1);
	root->right=makeTree(in,pre,k+1,e);
	return root;
}





int main(){
	int pre[]={8,10,1,6,4,7,3,14,13};
	int in[]={1,10,4,6,7,8,3,13,14};
	int n=sizeof(pre)/sizeof(int);
	node* root=makeTree(in,pre,0,n-1);
	
	PreOrder(root);
	cout<<endl;
	InOrder(root);
	cout<<endl;
	PostOrder(root);
	cout<<endl;
	LevelOrder(root);
	mirror(root);
	LevelOrder(root);

	cout<<endl;
	return 0;
}