#include <iostream>
using namespace std;

void PrintTable(int init,int fval,int step){
	int f=init;

	while(f<=fval){
		// Work
		int c=5*(f-32)/9;
		cout<<f<<" "<<c<<endl;

		f = f + step; 
	}	
}

void printHello(int a){

	cout<<"Hello World "<<a<<endl;
	return;
}

void printSum(int a,int b){

	cout<<(a+b)<<endl;
}

int SUM(int a,int b){
	int ans=a+b;
	return ans;
	// return (a+b);
}

int main(){
	int init,fval,step;

	cin>>init>>fval>>step;
	PrintTable(init,fval,step);
	printHello(10); // Function calling or invoking
	printSum(2,5);

	int ans=SUM(10,15);
	cout<<ans<<endl;

	cout<<endl;
	return 0;
}