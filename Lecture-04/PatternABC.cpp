// PatternABC
#include <iostream>
using namespace std;

int main(){
	int n;
	char ch='A';

	cin>>n;

	for(int i=1;i<=n;i++){
		ch='A';
		// Print Increasing alphabets
		for(int j=1;j<=n-i+1;j++){
			cout<<ch;
			ch=ch+1;
		}

		ch=ch-1;
		// Print Decreasing Characters
		for(int j=1;j<=n-i+1;j++){
			cout<<ch;
			ch=ch-1;
		}
		cout<<endl;

	}
	
	cout<<endl;
	return 0;
}