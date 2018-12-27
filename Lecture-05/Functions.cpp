// Functions
#include <iostream>
using namespace std;

void printHello(int a){

	cout<<"Hello World "<<a<<endl;
	return;
}

void printSum(int a,int b){

	cout<<(a+b)<<endl;
}

int SUM(int ,int); // Forward Declaration

int main(){

	int n=10;

	printHello(n); // Function calling or invoking
	printSum(2,5);

	int ans=SUM(10,15);
	cout<<ans<<endl;


	return 0;
}


int SUM(int a,int b){
	int ans=a+b;
	return ans;
	// return (a+b);
}