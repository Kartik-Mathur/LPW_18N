// MinCOins
#include <iostream>
using namespace std;

int mincoins(int amount,int *coins,int n){
	if(amount==0){
		return 0;
	}
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		if(amount>=coins[i]){
			int smallerans=mincoins(amount-coins[i],coins,n);
			if(smallerans!=INT_MAX){
				ans=min(ans,smallerans+1);
			}
		}
	}
	return ans;
}

int bottomUp(int amount,int *coins,int n){

	int dp[1000];

	for(int i=0;i<=amount;i++){
		dp[i]=INT_MAX;
	}

	dp[0]=0;

	for(int rupay=1;rupay<=amount;rupay++){

		for(int i=0;i<n;i++){
			if(rupay-coins[i]>=0){
				dp[rupay]=min(dp[rupay],dp[rupay-coins[i]]+1);
			}
		}
	}

	for(int i=0;i<=amount;i++){
		cout<<dp[i]<<" ";
	}	
	cout<<endl;
	return dp[amount];
}	

int main(){
	int coins[]={1,2,5};
	int n=sizeof(coins)/sizeof(int);

	int amount;
	cin>>amount;

	cout<<mincoins(amount,coins,n)<<endl;
	cout<<bottomUp(amount,coins,n)<<endl;


	return 0;
}