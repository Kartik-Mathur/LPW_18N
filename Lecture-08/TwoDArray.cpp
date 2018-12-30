// TwoDArray
#include <iostream>
using namespace std;

int main(){
	// int a[][4]={
	// 	{1,2,3,4},
	// 	{5,6,7,8},
	// 	{9,10,11,12}
	// };
	int a[100][100]={0};
	int i,j;
	cin>>i>>j;
	for(int row=0;row<i;row++){
		for(int col=0;col<j;col++){
			a[row][col]=row*col;
			// cin>>a[row][col];
		}
	}

	for(int row=0;row<11;row++){
		for(int col=0;col<11;col++){
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}

	return 0;
}