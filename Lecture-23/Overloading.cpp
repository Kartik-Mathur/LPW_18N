#include <iostream>
using namespace std;

class Book{
	string name;
	int price;
public:
	Book(string n,int p){
		price=p;
		name=n;
	}

	void print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<endl<<endl;
	}

	friend ostream& operator<<(ostream& os,Book c);
};

ostream& operator<<(ostream& os,Book b){
	cout<<"Name  : "<<b.name<<endl;
	cout<<"Price : "<<b.price<<endl<<endl;	
	return os;
}


int main(){
	Book b("C++",100);
	Book b1("Java",200);

	cout<<b<<b1<<endl;



	return 0;
}