#include <iostream>
#include <algorithm>
using namespace std;

void Print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

bool compare(int a,int b){
	cout<<"Compairing "<<a<<" and "<<b<<endl;
	return a<b;
}

int main(){
	int a[]={7,6,5,8,9,0,1,2,3};
	int n=sizeof(a)/sizeof(int);
	Print(a,n);

	sort(a,a+n,compare);
	Print(a,n);

	return 0;
}