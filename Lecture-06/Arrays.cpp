// Arrays
#include <iostream>
using namespace std;

void printArray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void printArray1(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
		// cout<<a[i]<<" "; // a[i] = *(a+i)
	}

	cout<<endl;
}

void printReverse(int *a,int n){

	for(int i=n-1;i>=0;i--){
		cout<<*(a+i)<<" ";
	}
	cout<<endl;

}

void BubbleSort(int *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(*(a+j)>*(a+j+1)){
				swap(*(a+j),*(a+j+1));
			}
		}
	}	
}

int SUM(int *a,int n){
	int ans=0;
	for(int i=0;i<n;i++){
		ans += *(a+i);
	}
	return ans;
}

int main(){
	int a[10]={1,1,1,1,1,1,1,1,1,1};
	int n=10;
	// int a1=001;
	// int a2=1;
	// cout<<a1<<" "<<a2<<endl;
	// printReverse(&a[0],n);
	// cout<<a<<endl;
	// cout<<a+1<<endl;
	// cout<<&a[0]<<endl;
	// cout<<&a[0]+1<<endl;
	// cout<<&a<<endl;
	// cout<<&a+1<<endl;
	int ans=SUM(a+5,n);
	cout<<"SUM is : "<<ans<<endl;


	return 0;
}