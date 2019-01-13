#include <iostream>
#include <vector>
using namespace std;

class stack{
public:	
	vector<int> v;

	void push(int data){
		v.push_back(data);
	}

	void pop(){
		v.pop_back();
	}

	bool empty(){
		return v.size()==0;
	}

	int top(){
		return v[v.size()-1];
	}
};

int main(){
	stack s;
	for(int i=0;i<10;i++){
		s.push(i);
	}

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}


	return 0;
}