// Fibonacci
#include <iostream>
using namespace std;

int Fibo(int n){
	if(n==0 || n==1){
		return n;
	}

	return Fibo(n-1)+Fibo(n-2);
}


int main(){
	int n;
	cin>>n;

	cout<<Fibo(n)<<endl;


	return 0;
}