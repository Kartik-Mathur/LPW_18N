// ElephantWays
#include <iostream>
using namespace std;

int ElephantWays(int i,int j){
	if(i==0 && j==0){
		return 1;
	}

	int ans=0;
	for(int k=1;k<=i;k++){
		ans += ElephantWays(i-k,j);
	}

	for(int k=1;k<=j;k++){
		ans += ElephantWays(i,j-k);
	}
	return ans;
}

int main(){
	int i,j;
	cin>>i>>j;

	cout<<ElephantWays(i,j)<<endl;

	cout<<endl;     
	return 0;
}