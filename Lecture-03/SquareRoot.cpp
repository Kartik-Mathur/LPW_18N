// SquareRoot
#include <iostream>
using namespace std;

int main(){

	float ans=0;
	int n;
	int precision;
	cin>>n>>precision;

	float inc=1;
	int current_precision=0;
	while(current_precision<=precision){

		while(ans*ans<=n){

			ans = ans + inc;
		}
		ans = ans - inc;

		inc=inc/10;
		current_precision++;
	}

	cout<<ans<<endl;





	return 0;
}