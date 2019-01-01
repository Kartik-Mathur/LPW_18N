#include <iostream>
using namespace std;

int BinarySearch(int *a,int s,int e,int key){
	if(s>e){
		return -1;
	}
	int mid=(s+e)/2;

	if(a[mid]==key){
		return mid;
	}
	else if(a[mid]>key){
		e=mid-1;
	}
	else{
		s=mid+1;
	}
	return BinarySearch(a,s,e,key);

}



void PrintArray(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


int main(){
	int a[]={1,2,4,5,7,8,9,10,11};
	int n=sizeof(a)/sizeof(int);

	PrintArray(a,n);
	int key;
	cin>>key;
	int index=BinarySearch(a,0,n-1,key);
	if(index!=-1){
		cout<<"Element Found at Index : "<<index<<endl;
	}
	else{
		cout<<"Element Not Found!"<<endl;
	}


	return 0;
}