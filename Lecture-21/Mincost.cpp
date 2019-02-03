// Mincost
#include <iostream>
using namespace std;

// int Mincost(int cost[][4],int i,int j,int dp[][10]){
// 	if(i==0 && j==0){
// 		dp[i][j]=cost[i][j];
// 		return cost[i][j];
// 	}
// 	if(i<0 || j<0){
// 		return 0;
// 	}
// 	if(dp[i][j]!=-1){
// 		return dp[i][j];
// 	}	
// 	if(i==0 && j>0){
// 		return 
// 	}


// 	int op1=Mincost(cost,i-1,j,dp);
// 	int op2=Mincost(cost,i,j-1,dp);

// 	int ans=min(op1,op2)+cost[i][j];
// 	dp[i][j]=ans;
// 	return ans;

// }
int Mincost(int cost[][4],int i,int j){
	if(i==0 && j==0){
		return cost[i][j];
	}
	if(i<0 || j<0){
		return 0;
	}

	if(i==0 && j>0){
		return Mincost(cost,i,j-1)+cost[i][j];
	}
	else if(j==0 && i>0){
		return Mincost(cost,i-1,j)+cost[i][j];
	}
	else{

		int op1=Mincost(cost,i-1,j);
		int op2=Mincost(cost,i,j-1);
		return min(op1,op2)+cost[i][j];
	}

}

int main(){
	int cost[4][4]={
		{1,1,2,3},
		{2,1,1,1},
		{3,5,6,2},
		{1,2,3,1}
	};
	int dp[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			dp[i][j]=-1;
		}
	}
	int i,j;
	cin>>i>>j;

	cout<<Mincost(cost,i,j)<<endl;
	// for(int i=0;i<4;i++){
	// 	for(int j=0;j<4;j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	return 0;
}