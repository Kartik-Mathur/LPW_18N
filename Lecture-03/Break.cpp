// Break
#include <iostream>
using namespace std;

int main(){

	int i=0;

	while(i<=10){

		if(i==5){
			cout<<"Exectuing Continue"<<endl;
			i++;
			continue;
		}

		cout<<i<<" "<<endl;

		i++;
	}



	return 0;
}