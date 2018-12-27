// Pointer&Functions
#include <iostream>
using namespace std;

void update(int *x){
	*x=*x+10;
	cout<<"In update : "<<*x<<endl;
}

void myupdate(int &y){
	y=y+10;
	cout<<y<<endl;
}

int main(){

	int a=10; 
	update(&a);
	cout<<"In Main : "<<a<<endl;
	myupdate(a);
	cout<<a<<endl;


	return 0;
}