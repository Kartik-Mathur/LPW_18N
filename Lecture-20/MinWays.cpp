// MinWays
#include <iostream>
#include <climits>
using namespace std;

int MinWays(int n){
	if(n==1){
		return 0;
	}
	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1=1+MinWays(n-1);

	if(n%2==0){
		op2=1+MinWays(n/2);
	}
	if(n%3==0){
		op3=1+MinWays(n/3);
	}
	return min(op1,min(op2,op3));
}

int bottomUP(int n){
	int dp[1000]={0};

	dp[1]=0;

	for(int i=2;i<=n;i++){
		int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
		op1=1+dp[i-1];
		if(i%2==0){
			op2=1+dp[i/2];
		}
		if(i%3==0){
			op3=1+dp[i/3];
		}

		dp[i]=min(op1,min(op2,op3));
	}

	for(int i=1;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	return dp[n];

}


int main(){

	int n;
	cin>>n;

	cout<<bottomUP(n)<<endl;
	cout<<MinWays(n)<<endl;


	return 0;
}