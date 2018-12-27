// BinarySearch
#include <iostream>
using namespace std;

int BinarySearch(int *a,int n,int key){

	int s=0;
	int e=n-1;

	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]<key){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	// cout<<"Key Not Found"<<endl; 
	return -1;


}

int main(){

	int a[]={1,3,4,5,6,7};
	int n=sizeof(a)/sizeof(int);
	int key;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cin>>key;

	int index=BinarySearch(a,n,key);
	if(index!=-1){
		cout<<"Key found at index : "<<index<<endl;
	}




	return 0;
}