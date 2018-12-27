// Pointer&Functions
#include <iostream>
using namespace std;

void update(int x){
	x=x+10;
	cout<<"In update : "<<x<<endl;
}


int main(){

	int x=10;
	update(x);
	cout<<"In Main : "<<x<<endl;


	return 0;
}