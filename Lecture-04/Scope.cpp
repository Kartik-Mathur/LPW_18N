// Scope
#include <iostream>
using namespace std;

int x; // Global Variable

int main(){

	cout<<x<<endl;

	int x=100;
	int i=100;

	for(i=0;i<10;i++){
		int x=i;
	}
	cout<<x<<endl;
	::x=90;
	::x = ::x +10;
	cout<<(::x)<<endl;
	cout<<i<<endl;
	
	cout<<endl;
	return 0;
}