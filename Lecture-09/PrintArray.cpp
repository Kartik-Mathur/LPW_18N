#include <iostream>
using namespace std;

void PrintArray(int *a,int n){
	if(n==0){
		return;
	}

	PrintArray(a+1,n-1);
	cout<<a[0]<<" ";

}

int SUM(int *a,int n){
	if(n==0){
		return 0;
	}

	int ChotaSum=SUM(a+1,n-1);
	return a[0]+ChotaSum;
}

int POWER(int x,int n){
	if(n==0){
		return 1;
	}

	return x*POWER(x,n-1);	
}

int main(){
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(int);

	// PrintArray(a,n);
	// cout<<SUM(a,n);
	cout<<POWER(2,3)<<endl;

	cout<<endl;


	return 0;
}