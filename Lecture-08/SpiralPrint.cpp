// SpiralPrint
#include <iostream>
using namespace std;


int main(){
	int a[100][100]={
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};
	int i,j;
	cin>>i>>j;
	// for(int row=0;row<i;row++){
	// 	for(int col=0;col<j;col++){
	// 		a[row][col]=row+col;
	// 		// cin>>a[row][col];
	// 	}
	// }
	for(int row=0;row<i;row++){
		for(int col=0;col<j;col++){
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}
	int sr=0,er=i-1,sc=0,ec=j-1;

	while(sr<=er && sc<=ec){
		// Print Starting Row
		for(int i=sc;i<=ec;i++){
			cout<<a[sr][i]<<" ";
		}
		sr++;

		// Print End column
		for(int j=sr;j<=er;j++){
			cout<<a[j][ec]<<" ";
		}
		ec--;

		if(sr<er){
			// Print End Row
			for(int i=ec;i>=sc;i--){
				cout<<a[er][i]<<" ";
			}

			er--;
		}
		if(sc<ec){
			// Print Starting Column
			for(int j=er;j>=sr;j--){
				cout<<a[j][sc]<<" ";
			}
			sc++;
		}
	}

	cout<<endl;








	return 0;
}