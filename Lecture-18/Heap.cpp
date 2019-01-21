#include <iostream>
#include <vector>
using namespace std;

class Minheap{
	vector<int> v;

	void heapify(int index){

		int min_index=index;

		int left=2*index;
		int right=left+1;

		if(left<v.size() && v[min_index]>v[left]){
			min_index=left;
		}
		if(right<v.size() && v[min_index]>v[right]){
			min_index=right;
		}

		if(min_index!=index){
			swap(v[min_index],v[index]);
			heapify(min_index);
		}


	}


public:
	Minheap(){
		v.push_back(-1);
	}

	void push(int data){
		v.push_back(data);

		int index=v.size()-1;
		int parent=index/2;

		while(index>1 && v[parent]>v[index]){
			swap(v[parent],v[index]);
			index=parent;
			parent /= 2;
		}
	}

	int search(){
		return v[1];
	}

	void pop(){
		int last_index=v.size()-1;
		swap(v[last_index],v[1]);
		v.pop_back();

		heapify(1);
	}

	bool empty(){
		return v.size()==1;
	}

};


int main(){
	Minheap h;
	int a[]={1,4,5,3,2,8,9,0};
	int n=sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++){
		h.push(a[i]);
	}

	while(!h.empty()){
		cout<<h.search()<<endl;
		h.pop();
	}






	cout<<endl;
	return 0;	
}