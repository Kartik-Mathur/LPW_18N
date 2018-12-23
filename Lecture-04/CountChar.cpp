// CountChar
#include <iostream>
using namespace std;

int main(){
	char ch;
	int count=0;
	int n;
	cin>>n;
	cout<<n<<endl;
	// cin>>ch;
	ch=cin.get();
	while(ch!='$'){
		count++;

		// cin>>ch;
		ch=cin.get();
	}
	cout<<count;
	
	cout<<endl;
	return 0;
}