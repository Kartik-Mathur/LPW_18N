// InbuiltStack
#include <iostream>
// #include <stack>
#include "Stack.h"
using namespace std;

class Book{
public:
	int price;
	char name[20];

	Book(int p,char *n){
		price=p;
		strcpy(name,n);
	}

	void print(){
		cout<<"Name : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
		cout<<endl;
	}
};


int main(){
	stack<Book> s;
	// for(int i=0;i<10;i++){
	// 	s.push(i);
	// }
	Book b1(100,"C++");
	Book b2(200,"Java");

	// s.push('A');
	// s.push('B');
	// s.push('C');
	// s.push('D');
	s.push(b1);
	s.push(b2);
	while(!s.empty()){
		// cout<<s.top()<<endl;
		Book b=s.top();
		b.print();
		s.pop();
	}


	cout<<endl;
	return 0;
}