#include <iostream>
using namespace std;

int fibo(int n){
	if(n==0||n==1){
		return n;
	}

	return fibo(n-1)+fibo(n-2);
}

int fib(int n,int *dp){
	if(n==0||n==1){
		dp[n]=n;
		return n;
	}
	if(dp[n]!=-1){
		return dp[n];
	}

	int ans=fib(n-1,dp)+fib(n-2,dp);
	dp[n]=ans;
	return ans;
}

int bottomUp(int n){
	int dp[100]={0};

	dp[0]=0;
	dp[1]=1;

	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}

	return dp[n];
}


int main(){
	
	int n;
	cin>>n;
	int dp[1000];

	for(int i=0;i<1000;i++){
		dp[i]=-1;
	}

	cout<<fib(n,dp)<<endl;
	cout<<bottomUp(n)<<endl;
	cout<<fibo(n)<<endl;

	for(int i=0;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;


	return 0;
}