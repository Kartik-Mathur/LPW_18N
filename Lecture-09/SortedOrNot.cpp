#include <iostream>
using namespace std;

bool isSorted(int *a,int n){
	if(n==0 || n==1){
		return true;
	}

	bool isChotaArraySorted=isSorted(a+1,n-1);
	if(a[0]<a[1] && isChotaArraySorted==true){
		return true;
	}
	else{
		return false;
	}

}

bool isSorted1(int *a,int n,int i){
	if(i==n-1){
		return true;
	}

	bool KyaCHotaSortedHai=isSorted1(a,n,i+1);

	if(a[i]<a[i+1] && KyaCHotaSortedHai){
		return true;
	}
	else{
		return false;
	}
}

bool isSorted2(int *a,int n){
	if(n==1||n==0){
		return true;
	}

	bool KyaCHotaSortedHai=isSorted2(a,n-1);
	if(KyaCHotaSortedHai && a[n-1]>a[n-2]){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int a[100];
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	if(isSorted2(a,n)){
		cout<<"SOrted"<<endl;
	}
	else{
		cout<<"Not Sorted"<<endl;
	}

	return 0;
}