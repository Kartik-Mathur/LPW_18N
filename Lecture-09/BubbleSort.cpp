#include <iostream>
using namespace std;

void BubbleSort(int *a,int n,int i){
	if(i==n-1){
		return;
	}

	for(int j=0;j<n-1-i;j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	BubbleSort(a,n,i+1);

}

void BubbleSort1(int *a,int n,int i,int j){
	if(i==n-1){
		return;
	}

	if(j==n-1){
		j=0;
		BubbleSort1(a,n,i+1,j);
		return;
	}

	if(a[j]>a[j+1]){
		swap(a[j],a[j+1]);
	}

	BubbleSort1(a,n,i,j+1);

}

int main(){
	int a[]={9,8,7,6,5,4,3,2,1,0};
	int n=sizeof(a)/sizeof(int);

	BubbleSort1(a,n,0,0);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0;
}