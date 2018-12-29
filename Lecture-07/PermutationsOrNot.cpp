// PermutationsOrNot
#include <iostream>
using namespace std;

int main(){
	char a[100],b[100];
	cin>>a>>b;

	int freq[26]={0};

	for(int i=0;a[i]!='\0';i++){
		int index=a[i]-'a';
		// cout<<a[i]<<" is mapped at : "<<index<<endl;
		freq[index]++;
	}

	for(int i=0;i<26;i++){
		cout<<freq[i]<<" ";
	}
	cout<<endl;

	for(int i=0;b[i]!='\0';i++){
		int index=b[i]-'a';
		freq[index]--;
	}

	for(int i=0;i<26;i++){
		cout<<freq[i]<<" ";
	}
	int i;
	for(i=0;i<26;i++){
		if(freq[i]!=0){
			cout<<"Not a Permutation"<<endl;
			break;
		}
	}
	if(i==26){
		cout<<"Permutation"<<endl;
	}

	cout<<endl;
	return 0;
}