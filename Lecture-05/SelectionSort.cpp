// SelectionSort
#include <iostream>
using namespace std;

int main(){

	int a[1000];

	int n,key;
	cout<<"Enter n : ";
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

 	// Selection Sort
	for(int i=0;i<n-1;i++){
		int minimum=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minimum]){
				minimum=j;
			}
		}
		swap(a[i],a[minimum]);
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	cout<<endl;
	return 0;
}