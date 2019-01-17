// LL_Queue
#include <iostream>
using namespace std;

template <typename T>
class node{
public:
	T data;
	node<T>* next;

	node(T d):data(d),next(NULL){

	}
};

template<typename T>
class Queue{
	node<T>* head;
	node<T>* tail;
public:
	Queue(){
		head=tail=NULL;
	}

	void push(T data){
		if(head==NULL){
			// Queue is empty, create a node and that node would be tail and head as well
			head=tail=new node<T>(data);
		}
		else{
			node<T>* n=new node<T>(data);
			tail->next=n;
			tail=n;
		}
	}

	void pop(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
		}
		else{
			node<T>* temp=head;
			head=head->next;
			delete temp;
		}
	}

	T front(){
		return head->data;
	}

	bool empty(){
		// how to tell it?
		return head==NULL?true:false;
	}
};


int main(){

	Queue<char> q;

	q.push('A');
	q.push('B');
	q.push('C');

	// q.push(1);
	// q.push(2);
	// q.push(3);
	// q.push(4);
	// q.push(5);
	// q.push(6);
	// q.push(7);

	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}












	cout<<endl;
	return 0;
}