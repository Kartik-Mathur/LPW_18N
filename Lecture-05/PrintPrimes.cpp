// PrintPrimes
#include <iostream>
using namespace std;

bool isPrime(int n){

	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void PrintPrimes(int n){
	for(int i=2;i<=n;i++){
		if(isPrime(i)){
			cout<<i<<" ";
		}
	}
}

int main(){
	int n;
	cin>>n;
	PrintPrimes(n);

	// if(isPrime(n)){
	// 	cout<<"Prime"<<endl;
	// }
	// else{
	// 	cout<<"Not Prime"<<endl;
	// }


	cout<<endl;
	return 0;
}