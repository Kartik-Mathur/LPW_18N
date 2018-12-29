#include <iostream>
using namespace std;

int length(char *ch){
	int i;
	for(i=0;ch[i]!='\0';i++){

	}
	return i;
}

void Copy(char *a,char *b){
	int i;
	for(i=0;b[i]!='\0';i++){
		a[i]=b[i];
	}
	a[i]='\0';
}

int main(){
	// To take input of string from user one by one
	char a[100];
	int n; // Number of strings user will enter

	// To store largest string and its size
	char largest[100];
	int large=0;

	cin>>n;

	cin.ignore();

	for(int i=0;i<n;i++){
		cin.getline(a,100);
		int l=length(a);
		if(l>large){
			Copy(largest,a);
			large=l;
		}
	}
	cout<<"Largest string : "<<largest<<endl;
	cout<<"Length :"<<large<<endl;





	return 0;
}