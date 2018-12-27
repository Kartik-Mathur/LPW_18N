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
	cout<<"Enter Key : ";
	cin>>key;
	int i;
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<"Key Found at index "<<i<<endl;
			break;
		}
	}
	if(i==n){
		cout<<"Key not found!";
	}

	cout<<endl;
	return 0;
}