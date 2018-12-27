// Arrays_Functions
#include <iostream>
using namespace std;

void PrintArray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

void InputArray(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}


int main(){
	// int a[9]={1,2,3,4,5,6,7,8,9};
	// int n=sizeof(a)/sizeof(int);
	// cout<<n<<endl;
	int n;
	int a[1000];
	cout<<"Enter n: ";
	cin>>n;
	InputArray(a,n);
	PrintArray(a,n);

	cout<<endl;
	return 0;
}