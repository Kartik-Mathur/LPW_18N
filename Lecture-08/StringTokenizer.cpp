// StringTokenizer
#include <iostream>
using namespace std;


int main(){
	char a[]="123...//1/./..34,./111_1111_1_1_1_1_11_1";
	char b[]="11_111_1111_.../444";
	// char *strtok(char*,char*listofDelimiters);
	char *ans=strtok(a,"./,_");
	cout<<ans<<endl;

	while(ans!=NULL){
		cout<<ans<<endl;

		ans=strtok(NULL,"./,_");
	}	
	return 0;
}