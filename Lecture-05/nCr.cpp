// nCr
#include <iostream>
using namespace std;

int fact(int n){
	int ans=1;
	for(int i=1;i<=n;i++){
		ans *= i;
	}

	return ans;
}

int NCR(int n,int r){

	int ans=fact(n)/(fact(r)*fact(n-r));
	return ans;

}


int main(){
	int a,b;
	cin>>a>>b;

	// cout<<fact(n)<<endl;
	cout<<NCR(a,b)<<endl;

	cout<<endl;
	return 0;
}