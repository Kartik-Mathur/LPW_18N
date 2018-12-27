#include <iostream>
#include <climits>
using namespace std;

int main(){

	int a[1000];

	int n,key;
	cout<<"Enter n : ";
	cin>>n;	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int largest=INT_MIN; // -2^31
	int smallest=INT_MAX; // 2^31 - 1		

	for(int i=0;i<n;i++){
		if(a[i]>largest){
			largest=a[i];
		}

	}
	cout<<"Largest : "<<largest;

	cout<<endl;
	return 0;
}