// UpperLower
#include <iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;

 // 1st way
	if(ch>='A'&&ch<='Z'){
		cout<<"Upper"<<endl;
	}
	else{
		cout<<"Lower"<<endl;
	}
// 2nd way
	if(ch>=65&&ch<=90){
		cout<<"Upper"<<endl;
	}
	else{
		cout<<"Lower"<<endl;
	}
// 3rd way
	int c=ch;
	if(c>=65 && c<=90){
		cout<<"Uppercase"<<endl;
	}
	else{
		cout<<"Lowercase"<<endl;
	}



	return 0;
}