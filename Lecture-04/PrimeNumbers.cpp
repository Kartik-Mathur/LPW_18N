#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	int i,j;
	if(n==2){
		cout<<2<<endl;
		return 0;
	}
	cout<<2;
	for(i=3;i<=n;i++){
		int no=i;
		
		for(j=2;j<=no-1;j++){
			if(no%j==0){
				break;
			}

		}

		if(j==no){
			cout<<", "<<no;
		}

	}


	cout<<endl;
	return 0;
}