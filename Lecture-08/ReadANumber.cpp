// ReadANumber
#include <iostream>
using namespace std;

// void FindNumber(int a[][100],int key,int row,int col){


// }


int main(){
	int a[100][100];
	int row,col;

	cin>>row>>col;

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			a[i][j]=i-j;
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	
	cout<<endl;
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			cout<<a[i][j]<<" "; 
		}
		cout<<endl;

	}
	int key;
	cout<<"Enter Key : ";
	cin>>key;
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(a[i][j]==key){
				break;
			}
		}
		if(j!=col){
			break;
		}		
	}
	if(i==row){
		cout<<"Key Not Found!"<<endl;
	}
	else{
		cout<<"Key Found at index : "<<i<<","<<j<<endl;
	}


	return 0;
}