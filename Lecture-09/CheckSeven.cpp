// CheckSeven
#include <iostream>
using namespace std;

bool CheckSeven(int *a,int n,int i){
	if(i==n){
		return false;
	}

	if(a[i]==7){
		return true;
	}
	// bool KyaCHoteMeiHai=CheckSeven(a,n,i+1);
	// return KyaCHoteMeiHai;
	return CheckSeven(a,n,i+1);
}

int First7(int *a,int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i]==7){
		return i;
	}

	return First7(a,n,i+1);

}

int last7(int *a,int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i]==7){
		int PehleWalaIndex=i;
		int AageWalaIndex=last7(a,n,i+1);
		if(AageWalaIndex>PehleWalaIndex){
			return AageWalaIndex;
		}
		else{
			return PehleWalaIndex;
		}
	}

	return last7(a,n,i+1);
}

int main(){
	int a[]={1,2,3,4,7,5,6,7,7,5,4,3,7};
	int n=sizeof(a)/sizeof(int);
	int index=last7(a,n,0);
	if(index!=-1){
		cout<<"Found at : "<<index<<endl;
	}
	else{
		cout<<"Not Found!"<<endl;
	}

	return 0;
}