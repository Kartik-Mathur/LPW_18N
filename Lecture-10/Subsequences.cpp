// Subsequences
#include <iostream>
using namespace std;

void Subsequences(char *in,char *out,int i,int j){
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}

	out[j]=in[i];
	Subsequences(in,out,i+1,j+1);

	Subsequences(in,out,i+1,j);
}


int main(){
	char a[100],b[100];
	cin>>a;

	Subsequences(a,b,0,0);


	return 0;
}