// InbuiltVector
#include <iostream>
using namespace std;

class Vector{
public:
	int cs;
	int *arr;
	int ms;

	Vector(){
		cs=0;
		ms=4;
		arr= new int[ms];
	}
	Vector(int s){
		cs=0;
		ms=s;
		arr=new int[ms];
	}

	void push_back(int d){
		if(cs==ms){
			int* oldArr=arr;
			int oldSize=ms;


			ms=2*ms;
			arr=new int[ms];

			for(int i=0;i<oldSize;i++){
				arr[i]=oldArr[i];
			}
			delete []oldArr;
		}

		arr[cs]=d;
		cs++;
	}

	void pop_back(){
		if(cs>0){
			cs--;
		}
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}

	bool isEmpty(){
		return cs==0;
	}

	int operator[](int i){
		return arr[i];
	}
	// v[i]
};

int main(){
	Vector v;

	for(int i=0;i<10;i++){
		v.push_back(i);
	}
	v.pop_back();
	v.pop_back();

	// sort(v.begin(),v.end(),compare);

	cout<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;	

	return 0;
}