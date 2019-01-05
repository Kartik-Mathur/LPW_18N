// DynamicAllocation
#include <iostream>
using namespace std;

int *CreateArray(int n){
	int *a=new int[n];
	for(int i=0;i<n;i++){
		a[i]=i;
	}	
	return a;
}

int main(){
	// int *a=new int;
	// *a=10;
	// cout<<*a<<endl;
	// delete a;// To free memory
	int n;
	int r,c;
	cin>>r>>c;
	// int*a=CreateArray(n);

	// int *arr=new int[n];
	// for(int i=0;i<n;i++){
	// 	arr[i]=i;
	// }

	int **a;
	a=new int*[r];
	for(int i=0;i<r;i++){
		a[i]=new int[c];
	}

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j]=i*j;
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	

	// Deleting 2-D array
	for(int i=0;i<r;i++){
		delete []a[i];
	}

	delete []a;

	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }	
	cout<<endl;
	// delete []a;

	return 0;
}