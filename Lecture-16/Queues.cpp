#include <iostream>
using namespace std;

class Queue{
	int *arr;
	int f;
	int r;
	int ms; // size of array
	int cs; // number of elements currently present in the queue
public:
	Queue(int s=5){
		ms=s;
		f=0;
		r=ms-1;
		arr = new int[ms];
		cs=0;
	}

	// Queue insertion
	void push(int data){
		if(!full()){
			r=(r+1)%ms;
			arr[r]=data;
			cs++; 	
		}
	}

	// Queue pop()
	void pop(){
		if(!empty()){
			f=(f+1)%ms;
			cs--;
		}
	}

	// front element of the queue
	int front(){
		return arr[f];
	}

	bool full(){
		// ??
		return cs==ms;
	}

	bool empty(){
		return cs==0;
	}

};



int main(){

	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);

	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}






	return 0;
}