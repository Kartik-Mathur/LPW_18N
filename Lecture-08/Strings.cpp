// Strings
#include <iostream>
using namespace std;


int main(){
	char a[]="Hello Coding Blocks";

	string s="Hello World!"; // Initialization- way1
	string s2("Hello World!"); // Initialization- way2
	string s1(a); // Initialization - way3
	// cin>>s;
	getline(cin,s); //To input string along with whitespaces
	cout<<s<<endl;	
	cout<<s1<<endl;

	return 0;
}