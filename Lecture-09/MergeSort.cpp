#include <iostream>
using namespace std;

void merge(int *a,int *x,int *y,int s,int e){
	int mid=(s+e)/2;

	int i=s;
	int j=mid+1;
	int k=s;
	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k]=x[i];
			k++;
			i++;
		}
		else{
			a[k]=y[j];
			k++;
			j++;
		}
	}

	while(i<=mid){
		a[k]=x[i];
		k++;
		i++;
	}
	while(j<=e){
		a[k++]=y[j++];
	}
}



void MergeSort(int *a,int s,int e){
	if(s>=e){
		return;
	}

	// Divide
	int x[100],y[100];
	int mid=(s+e)/2;
	for(int i=s;i<=mid;i++){
		x[i]=a[i];
	}
	for(int i=mid+1;i<=e;i++){
		y[i]=a[i];
	}

	//Sort
	MergeSort(x,s,mid);
	MergeSort(y,mid+1,e);

	//Merge
	merge(a,x,y,s,e);
}


void PrintArray(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


int main(){
	int a[]={1,4,3,2,7,6,5,8,0};
	int n=sizeof(a)/sizeof(int);
	PrintArray(a,n);
	MergeSort(a,0,n-1);
	PrintArray(a,n);



	return 0;
}