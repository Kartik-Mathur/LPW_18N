// LinkedList
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){

	}
};

node* CreateLL(){
	node* head=NULL;
	int data;
	cin>>data;

	while(data!=-1){
		node* n=new node(data);
		n->next=head;
		head=n;

		cin>>data;
	}
	return head;
}

void print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<endl;
}

node* mid(node* head){
	if(head==NULL||head->next==NULL){
		return head;
	}

	node* slow=head;
	node* fast=head->next;

	while(fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
			fast=fast->next;
			slow=slow->next;
		}
	}
	return slow;
}

int length(node* head){
	int count=0;
	while(head){
		count++;

		head=head->next;
	}
	return count;
}


void BubbleSort(node* &head){
	int len=length(head);
	node* current;
	node* prev;
	node* n;
	for(int i=1;i<len;i++){
		current=head;
		prev=NULL;
		while(current && current->next){
			n=current->next;

			if(current->data>n->data){
				// swapping
				if(prev==NULL){
					current->next=n->next;
					n->next=current;
					head=prev=n;
				}
				else{
					current->next=n->next;
					n->next=current;
					prev->next=n;
					prev=n;
				}
			}
			else{
				prev=current;
				current=n;
			}
		}
	}
}
	

void ReverseLL(node* &head){
	node* prev=NULL;
	node* current=head;
	node* n;
	while(current){
		n=current->next;
		current->next=prev;
		prev=current;
		current=n;
	}
	head=prev;
}

node* merge(node* a,node* b){
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}

	node* c;
	if(a->data<b->data){
		c=a;
		c->next=merge(a->next,b);
	}
	else{
		c=b;
		c->next=merge(a,b->next);
	}
	return c;
}

node* mergeSort(node* head){
	if(head==NULL||head->next==NULL){
		return head;
	}

	// Divide
	node* m=mid(head);
	node* a=head;
	node* b=m->next;
	m->next=NULL;

	// Sort
	a=mergeSort(a);
	b=mergeSort(b);

	// Merge
	node* newHead=merge(a,b);
	return newHead;
}



int main(){

	node* head=CreateLL();
	// node* head1=CreateLL();
	
	print(head);
	// print(head1);
	// node* ans=merge(head,head1);
	head=mergeSort(head);
	print(head);
	// BubbleSort(head);
	// print(head);
	// ReverseLL(head);
	// print(head);
	// node* m=mid(head);
	// if(m!=NULL){
	// 	cout<<"Mid : "<<m->data<<endl;
	// }

	return 0;
}