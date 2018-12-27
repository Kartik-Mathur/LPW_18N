// Pointers
#include <iostream>
using namespace std;

int main(){
	int a=10;
	float b=10.01;
	char ch='A';

	int *aptr=&a;
	float *bptr=&b;
	char *ptr=&ch;
	int *chptr=(int* )&ch;


	cout<<aptr<<endl;
	cout<<aptr+1<<endl;

	cout<<bptr<<endl;
	cout<<bptr+1<<endl;

	cout<<(void *)ptr<<endl; // Fooling the compiler
	cout<<(void*)(ptr+1)<<endl;

	cout<<chptr<<endl;
	cout<<(chptr+1)<<endl;




	cout<<endl;
	return 0;
}