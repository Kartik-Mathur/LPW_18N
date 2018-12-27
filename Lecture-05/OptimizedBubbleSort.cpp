// BubbleSort
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

	// BubbleSort
	for(int i=0;i<n-1;i++){
		int count=0;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				count++;
				swap(a[j],a[j+1]);
			}
		}
		if(count==0){
			break;
		}
	}



	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	cout<<endl;
	return 0;
}