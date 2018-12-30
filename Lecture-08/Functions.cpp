// Functions
#include <iostream>
using namespace std;

void PrintArray(int a[][10],int row,int col){

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

}

int main(){
	int a[10][10];
	int i,j;
	cin>>i>>j;
	for(int row=0;row<i;row++){
		for(int col=0;col<j;col++){
			a[row][col]=row*col;
			// cin>>a[row][col];
		}
	}

	PrintArray(a,i,j);

	return 0;
}