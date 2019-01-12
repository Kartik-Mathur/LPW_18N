#include <iostream>
#include "node.h"
using namespace std;

template <typename T>
class stack{
public:
	int cs;
	node<T>* head;

	stack(){
		cs=0;
		head=NULL;
	}

	void push(T data){
		node<T>* n=new node<T>(data);
		n->next=head;
		head=n;
		cs++;
	}

	void pop(){
		if(cs>0){
			node<T>* temp=head;
			head=head->next;
			delete temp;
			cs--;
			if(cs==0){
				head=NULL;
			}
		}
	}

	bool empty(){
		return cs==0;
	}

	T top(){
		return head->data;
	}

};