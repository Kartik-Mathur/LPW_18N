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

class LinkedList{
	node* SearchRecursivelyHelper(node* h,int key){
		if(h==NULL){
			return NULL;
		}

		if(h->data==key){
			return h;
		}
		return SearchRecursivelyHelper(h->next,key);		
	}	

public:
	node* head;
	node* tail;

	LinkedList(){
		head=tail=NULL;
	}

	void InsertAtFront(int data){
		if(head==NULL){
			node* n=new node(data);
			tail=head=n;
		}
		else{
			node* n=new node(data);
			n->next=head; // same as (*n).next=head;
			head=n;
		}
	}

	void InsertAtEnd(int data){
		if(head==NULL){
			node* n=new node(data);
			tail=head=n;
		}
		else{
			node* n=new node(data);
			tail->next=n;
			tail=n;
		}
	}

	int length(){
		node* temp=head;
		int count=0;
		while(temp){
			count++;
			temp=temp->next;
		}
		return count;
	}

	void InsertAtMid(int data,int pos){
		if(pos==0){
			InsertAtFront(data);
		}
		else if(pos>=length()){
			InsertAtEnd(data);
		}
		else{
			node* temp=head;
			int p=1;
			while(p<=pos-1){
				temp=temp->next;
				p++;
			}
			node* n=new node(data);
			n->next=temp->next;
			temp->next=n;
		}
	}

	void DeleteAtFront(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
		}
		else{
			node* temp=head;
			head=head->next;
			delete temp;
		}
	}

	void DeleteAtEnd(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
		}
		else{
			node* temp=head;
			while(temp->next!=tail){
				temp=temp->next;
			}
			delete tail;
			temp->next=NULL;
			tail=temp;
		}		
	}



	void DeleteAtMid(int pos){
		if(pos==0){
			DeleteAtFront();
		}
		else if(pos>=length()){
			DeleteAtEnd();
		}
		else{
			node* temp=head;
			int p=1;
			while(p<=pos-1){
				temp=temp->next;
				p++;
			}
			node* n=temp->next;
			temp->next=n->next;
			delete n;
		}
	}

	node* search(int key){
		node* temp=head;

		while(temp!=NULL){
			if(temp->data==key){
				return temp;
			}
			temp=temp->next;
		}

		return NULL;
	}

	node* SearchRecursively(int key){
		return SearchRecursivelyHelper(head,key);
	}




	void print(){
		node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"-->";
			temp=temp->next;
		}
		cout<<endl;
	}


};





int main(){

	LinkedList l;

	l.InsertAtFront(1);
	l.InsertAtFront(2);
	l.InsertAtFront(3);
	l.InsertAtFront(4);
	l.InsertAtFront(5);
	l.InsertAtEnd(6);
	l.InsertAtEnd(7);
	l.InsertAtMid(0,2);
	l.print();
	// l.DeleteAtFront();
	// l.DeleteAtFront();
	l.DeleteAtMid(3);
	l.print();
	l.DeleteAtEnd();
	l.print();
	node* ans=l.search(0);
	if(ans!=NULL){
		cout<<"Found!"<<ans->data<<endl;
		cout<<ans->next->data<<endl;
	}
	else{
		cout<<"Not Found!"<<endl;
	}
	ans=l.SearchRecursively(0);
	if(ans!=NULL){
		cout<<"Found!"<<ans->data<<endl;
		cout<<ans->next->data<<endl;
	}
	else{
		cout<<"Not Found!"<<endl;
	}	
	cout<<l.length()<<endl;


	return 0;
}