#include <iostream>
using namespace std;

void readLine(char *ch,int s,char Delimiter='\n'){
	char a=cin.get();
	int i=0;
	while(a!=Delimiter){
		ch[i]=a;
		i++;
		if(i==s){
			break;
		}
		a=cin.get(); 
	}
	ch[i]='\0';
}

int length(char *ch){
	int i;
	for(i=0;ch[i]!='\0';i++){

	}
	return i;
}

int main(){
	int a[]={1,2,3,4};
	
	char ch[100];

	// cin.getline(name_of_array,sizeof_array,Delimiter);
	// cin.getline(ch,100); // Default Delimiter= '\n'
	readLine(ch,100);
	cout<<ch<<endl;
	cout<<"Length : "<<length(ch)<<endl;

	return 0;
}