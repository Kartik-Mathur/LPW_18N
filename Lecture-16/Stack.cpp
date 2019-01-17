// Stack
#include <iostream>
#include <queue>
using namespace std;

class stack{
	queue<int> q1;
	queue<int> q2;
public:

	void push(int data){

		if(!q1.empty() && q2.empty()){
			// q1 khali nahi hai and q2 khali hai
			q1.push(data);
		}
		else if(q1.empty() && !q2.empty()){
			q2.push(data);
		}
		else{
			// if both are empty then what to do?
			q1.push(data); // choose any one queue and push data in it, we are choosing 
			// q1 you can also do
			// q2.push(data)
		}
	}

	void pop(){
		if(!q1.empty() && q2.empty()){
			while(q1.size()>1){
				int f=q1.front();
				q1.pop();

				q2.push(f);
			}
			q1.pop();
		}
		else if(q1.empty() && !q2.empty()){
			while(q2.size()>1){
				int f=q2.front();
				q2.pop();

				q1.push(f);
			}
			q2.pop();
		}
	}

	int top(){
		if(!q1.empty() && q2.empty()){
			while(q1.size()>1){
				int f=q1.front();
				q1.pop();

				q2.push(f);
			}
			int ans=q1.front();
			q1.pop();
			q2.push(ans);
			return ans;
		}
		else{
			while(q2.size()>1){
				int f=q2.front();
				q2.pop();

				q1.push(f);
			}
			int ans=q2.front();
			q2.pop();
			q1.push(ans);
			return ans;
		}	

	}

	bool empty(){
		// how to find whether stack is empty or not?
		if(q1.empty() && q2.empty()){
			return true;
		}
		else{
			return false;
		}
	}
};

void print(stack s){
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}	
}

int main(){
	stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	print(s);






	return 0;
}