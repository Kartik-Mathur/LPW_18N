// InbuiltPQ
#include <iostream>
#include <queue>
#include <functional>
using namespace std;

class Comparator{
public:
	bool operator()(int a,int b){
		return a>b;
	}

};

void print(priority_queue<int,vector<int>,greater<int> > h){
	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}	
}

int main(){
	priority_queue<int,vector<int>,greater<int> > h;
	int k=4;
	int data;
	int cs=0;
	while(1){
		cin>>data;
		if(data==-1){
			print(h);
		}
		else if(cs<k){
			h.push(data);
			cs++;
		}
		else{
			if(data>h.top()){
				h.pop();
				h.push(data);
			}
		}


	}


	// int a[]={1,4,5,3,2,8,9,0};
	// int n=sizeof(a)/sizeof(int);
	// for(int i=0;i<n;i++){
	// 	h.push(a[i]);
	// }

	// while(!h.empty()){
	// 	cout<<h.top()<<endl;
	// 	h.pop();
	// }

	// cout<<endl;
	return 0;	
}