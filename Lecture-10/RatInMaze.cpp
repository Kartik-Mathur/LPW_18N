// RatInMaze
#include <iostream>
using namespace std;

bool RatInMaze(char maze[][10],int sol[][100],int i,int j,int m,int n){
	//base case
	if(i==m-1 && j==n-1){
		sol[i][j]=1;
		// Print the solution and return true
		for(int k=0;k<m;k++){
			for(int l=0;l<n;l++){
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	sol[i][j]=1;
	if(j+1<n && maze[i][j+1]!='X'){
		bool KyaRightSeRaastaMilla=RatInMaze(maze,sol,i,j+1,m,n);
		if(KyaRightSeRaastaMilla){
			return true;
		}
	}

	if(i+1<m && maze[i+1][j]!='X'){
		bool KyaNeecheSeRaastaMilla=RatInMaze(maze,sol,i+1,j,m,n);
		if(KyaNeecheSeRaastaMilla){
			return true;
		}
	}
	sol[i][j]=0;
	return false;


}


int main(){
	char maze[][10]={
		"OOOO",
		"OOXX",
		"OOOO",
		"XXOO"
	};

	int sol[100][100]={0};
	RatInMaze(maze,sol,0,0,4,4);


	return 0;
}