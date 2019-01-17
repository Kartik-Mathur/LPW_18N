// ReversingQueue
#include <iostream>
#include <queue> // header file to use STL
#include <stack>
using namespace std;

void print(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}	
	cout<<endl;
}


int main(){
	queue<int> q;
	stack<int> s;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);	

// print queue
	print(q);
// Empty queue in a stack
	while(!q.empty()){
		int a=q.front();
		q.pop();
		s.push(a);
	}
// Empty stack in queue 
	while(!s.empty()){
		int a=s.top();
		s.pop();
		q.push(a);
	}
// print queue
	print(q);	



	return 0;
}