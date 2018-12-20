// PatternNumbers
#include <iostream>
using namespace std;


int main(){

	int n;
	cout <<"Enter Number of lines: ";
	cin>>n;

	int i=1;

	while(i<=n){
		// Print n-i spaces
		int spaces=1;
		while(spaces<=n-i){
			// Work
			cout<<" ";
			spaces++;
		}
		// Print i increasing numbers starting from i
		int val=i;
		int j=1;
		while(j<=i){
			cout<<val;
			val++;

			j++;
		}
		// Print i-1 decreasing no. starting from 2*i-2
		//val=2*i-2; 
		val=val-2;
		j=1;
		while(j<=i-1){
			cout<<val;
			val--;
			j++;
		}
		cout<<endl;
		i++; // i=i+1;
	}



	return 0;
}