// Vector
#include <iostream>
#include <vector>
using namespace std;
bool compare(int a,int b){
	return a>b;
}

int main(){
	vector<int> v;

	for(int i=0;i<16;i++){
		v.push_back(i);
	}
	v.pop_back();
	v.pop_back();

	sort(v.begin(),v.end(),compare);

	cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;


	return 0;
}