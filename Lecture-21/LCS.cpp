// LCS
#include <iostream>
using namespace std;

int LCS(char *a,char *b){
	int n=strlen(a);
	int m=strlen(b);
	int dp[100][100]={0};
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0||j==0){
				dp[i][j]=0;
			}	
			else{
				if(a[i-1]==b[j-1]){
					dp[i][j]=1+dp[i-1][j-1];
				}
				else{
					int op1=dp[i-1][j];
					int op2=dp[i][j-1];
					dp[i][j]=max(op1,op2);
				}
			}
		}
	}

	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[n][m];


}


int main(){
	char a[]="dabc";
	char b[]="abc";

	cout<<LCS(a,b)<<endl;


	return 0;
}