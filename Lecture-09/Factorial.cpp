#include <iostream>
using namespace std;

int factorial(int n){

	if(n==0){
		return 1;
	}

	// int a=factorial(n-1);
	// int ans=n*a;
	return n*factorial(n-1);
}



int main(){

	int n;
	cin>>n;
	cout<<factorial(n)<<endl;

	return 0;
}