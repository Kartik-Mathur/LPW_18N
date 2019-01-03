// SudokuSOlver
#include <iostream>
#include <cmath>
using namespace std;

bool isSafeToPut(int maze[][9],int i,int j,int n,int number){
	for(int k=0;k<n;k++){
		if(maze[k][j]==number){
			return false;
		}
	}
	for(int k=0;k<n;k++){
		if(maze[i][k]==number){
			return false;
		}
	}	

	n=sqrt(n);
	int starti=(i/n)*n;
	int startj=(j/n)*n;

	for(int k=starti;k<starti+n;k++){
		for(int l=startj;l<startj+n;l++){
			if(maze[k][l]==number){
				return false;
			}
		}
	}
	return true;
}


bool SudokuSolver(int maze[][9],int i,int j,int n){
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<maze[k][l]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	if(j==n){
		j=0;
		return SudokuSolver(maze,i+1,j,n);
	}

	if(maze[i][j]!=0){
		return SudokuSolver(maze,i,j+1,n);
	}

	for(int number=1;number<=n;number++){
		if(isSafeToPut(maze,i,j,n,number)){
			maze[i][j]=number;
			bool KyaBaatBani=SudokuSolver(maze,i,j+1,n);
			if(KyaBaatBani){
				return true;
			}
			maze[i][j]=0;
		}
	}
	return false;
}

int main(){
	int mat[9][9] =
		{{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

	SudokuSolver(mat,0,0,9);


	return 0;
}