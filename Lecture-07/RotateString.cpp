// RotateString
#include <iostream>
using namespace std;

int length(char *ch){
	int i;
	for(i=0;ch[i]!='\0';i++){

	}
	return i;
}

void RotateString(char *a,int n){
	int l=length(a);
	int j=l-1;

	while(j>=0){
		a[j+n]=a[j];
		j--;
	}
	// cout<<a<<endl;
	int i=0;
	j=l;
	while(i<n){
		a[i]=a[j];
		i++;
		j++;
	}
	a[l]='\0';
	// cout<<a<<endl;
}

int main(){
	char a[100];
	int n;
	cout<<"Enter String :";
	cin.getline(a,100);
	cout<<"Enter n :";
	cin>>n;

	RotateString(a,n);
	cout<<a<<endl;


	return 0;
}