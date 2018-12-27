// MergingArrays
#include <iostream>
using namespace std;

void Merge(int a[],int n,int b[],int m){
	int i=n-1;
	int j=m-1;
	int k=m+n-1;

	while(i>=0 && j>=0){
		if(a[i]>b[j]){
			a[k]=a[i];
			k--;
			i--;
		}
		else{
			a[k]=b[j];
			k--;
			j--;
		}
	}
	// if(j>0){
		while(j>=0){
			a[k]=b[j];
			k--;
			j--;
		}
	// }
	// else{
		while(i>=0){
			a[k--]=a[i--];
		}
	// }

}


int main(){
	int a[10]={1,3,5,7,8,9};
	int b[]={2,4,6,10};

	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<&a[0]<<endl;


	Merge(a,6,b,4);

	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;




	return 0;
}