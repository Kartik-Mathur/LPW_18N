// STRINGTOINT
#include <iostream>
using namespace std;

int StringToInt(char *a,int i){
	if(i==0){
		return 0;
	}

	int last_digit=a[i-1]-'0';
	int ans=StringToInt(a,i-1)*10+last_digit;
	return ans;
}



int main(){
	char a[100];
	cin>>a;
	cout<<strlen(a)<<endl;
	cout<<StringToInt(a,4)<<endl;


	return 0;
}