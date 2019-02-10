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
