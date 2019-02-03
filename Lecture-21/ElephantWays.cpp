// ElephantWays
#include <iostream>
using namespace std;

int ways(int i,int j){
	int dp[100][100]={0};

	dp[0][0]=1;
	int val=1;
	for(int k=1;k<=j;k++){
		dp[0][k]=val;
		val=val*2;
	}

	val=1;
	for(int k=1;k<=i;k++){
		dp[k][0]=val;
		val=2*val;
	}

	for(int m=1;m<=i;m++){
		for(int n=1;n<=j;n++){
			int ans=0;
			for(int k=0;k<m;k++){
				ans += dp[k][n];
			}
			for(int k=0;k<n;k++){
				ans += dp[m][k];
			}
			dp[m][n]=ans;
		}
	}
	for(int m=0;m<=i;m++){
		for(int n=0;n<=j;n++){

			cout<<dp[m][n]<<" ";
		}
		cout<<endl;
	}
	return dp[i][j];

}

int main(){

	int i,j;
	cin>>i>>j;

	cout<<ways(i,j)<<endl;

	return 0;
}