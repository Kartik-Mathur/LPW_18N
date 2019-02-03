#include <iostream>
using namespace std;

int wine(int *a,int i,int j,int day){
	if(i>j){
		return 0;
	}

	int op1=a[i]*day+wine(a,i+1,j,day+1);
	int op2=a[j]*day+wine(a,i,j-1,day+1);
	return max(op1,op2);
}

int topdown(int a[],int i,int j,int day,int dp[][100]){
	if(i>j){
		dp[i][j]=0;
		return 0;
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
	}

	int op1=a[i]*day+topdown(a,i+1,j,day+1,dp);
	int op2=a[j]*day+topdown(a,i,j-1,day+1,dp);

	dp[i][j]=max(op1,op2);
	return dp[i][j];
}

// int totalWays(){

// 	for(int i=0;i<=n;i++){
// 		for(int j=0;j<=m;j++){
// 			if(i==0||j==0){
// 				dp[i][j]=1;
// 			}
// 			else{
// 				dp[i][j]=dp[i-1][j]+dp[i][j-1];
// 			}
// 		}
// 	}

// }


int bottomUP(int *w,int n){
	int dp[100][100]={0};

	int day=n;
	for(int i=0;i<n;i++){
		dp[i][i]=day*w[i];
	}
	day--;

	for(int len=2;len<=n;len++){
		int starti=0;
		int endi=n-len;
		int i=starti;

		while(i<=endi){
			int j=i+len-1;

			int op1=w[i]*day + dp[i+1][j];
			int op2=w[j]*day + dp[i][j-1];
			dp[i][j]=max(op1,op2);
			i++;
		}
		day--;
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[0][n-1];

}


int main(){
	
	int w[]={2,3,5,1,4};
	int n=sizeof(w)/sizeof(int);

	int dp[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			dp[i][j]=-1;
		}
	}
	cout<<bottomUP(w,n)<<endl;
	cout<<wine(w,0,n-1,1)<<endl;
	cout<<topdown(w,0,n-1,1,dp)<<endl;


	return 0;
}