// PhoneKeyPad
#include <iostream>
using namespace std;

string keys[]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void PhoneKeyPad(char *in,char *out,int i,int j){
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}

	int index=in[i]-'0';
	for(int k=0;keys[index][k]!='\0';k++){
		out[j]=keys[index][k];
		PhoneKeyPad(in,out,i+1,j+1);
	}

}

int main(){

	char a[100],b[100];
	cin>>a;
	PhoneKeyPad(a,b,0,0);

	return 0;
}