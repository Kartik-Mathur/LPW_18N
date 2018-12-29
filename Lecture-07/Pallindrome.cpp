// Pallindrome
#include <iostream>
using namespace std;

int length(char *ch){
	int i;
	for(i=0;ch[i]!='\0';i++){

	}
	return i;
}


bool isPallindrome(char *ch){
	int i=0;
	int j=length(ch)-1;
	while(i<j){
		if(ch[i]!=ch[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}


int main(){
	char ch[100];
	cin.getline(ch,100);

	if(isPallindrome(ch)){
		cout<<"Pallindrome"<<endl;
	}
	else{
		cout<<"Not a Pallindrome"<<endl;
	}


	return 0;
}