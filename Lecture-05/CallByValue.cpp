// CallByValue
#include <iostream>
using namespace std;

void mySwap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;	

	cout<<"In My swap a: "<<a<<" b: "<<b<<endl; // 20 10
}


int main(){
	int c=10,d=20;

	mySwap(c,d);

	cout<<"In Main a: "<<c<<" b: "<<d<<endl; // 10 20



	cout<<endl;
	return 0;
}