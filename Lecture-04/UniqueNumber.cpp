// UniqueNumber
#include <iostream>
using namespace std;

int main(){
	int ans=0;
	int n,no;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>no;
		ans = ans^no;
	}
	cout<<ans;

	cout<<endl;
	return 0;
}