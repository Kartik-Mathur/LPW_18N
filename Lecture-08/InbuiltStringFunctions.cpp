// InbuiltStringFunctions
#include <iostream>
using namespace std;


int main(){
	char a[][3]={
		{'A','B','\0'},
		{'C','D','\0'},
		{'E','F','\0'}
	};
	char a[10][10]={
		"Hello",
		"World",
		"Coding",
		"Apple"
	};
	// cin>>a;
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;
	cout<<a[3]<<endl;
	// cout<<strlen(a)<<endl;	
	// strcpy(b,a); // Copy a in b
	// cout<<a<<endl<<b<<endl;

	return 0;
}