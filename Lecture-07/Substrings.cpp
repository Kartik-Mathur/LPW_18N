// Substrings
#include <iostream>
using namespace std;

int length(char *ch){
	int i;
	for(i=0;ch[i]!='\0';i++){

	}
	return i;
}

int main(){
	char a[]="abcd";

	for(int i=0;a[i]!='\0';i++){
		for(int j=i;a[j]!='\0';j++){
			// cout<<"("<<i<<","<<j<<")"<<" ";
			for(int k=i;k<=j;k++){
				cout<<a[k];
			}cout<<endl;
		}
		// cout<<endl;
	}



	return 0;
}