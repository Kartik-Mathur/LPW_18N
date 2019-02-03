// Knapsack
#include <iostream>
using namespace std;

int Knapsack(int *prices,int *wts,int n,int capacity){
	if(n==0 || capacity==0){
		return 0;
	}

	int inc=0,exc=0;
	exc=0+Knapsack(prices,wts,n-1,capacity);

	if(wts[n-1]<=capacity){
		inc=prices[n-1]+Knapsack(prices,wts,n-1,capacity-wts[n-1]);
	}

	return max(inc,exc);
}


int main(){
	int prices[]={10,20,15,5};
	int wts[]={5,8,4,6};

	int capacity=11;

	cout<<Knapsack(prices,wts,4,capacity)<<endl;


	return 0;
}