// InbuiltHashmap
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;
class Fruit{
public:
	char name[10];
	int sweet;
	char state[10];
	char color[10];

	Fruit(){// arguments
		// Assign
	}

};

int main(){
	// auto i=10;
	// cout<<i<<endl;
	// unordered_map<_key_,_value_> h;
	map<string,int> h;
	// unordered_map<string,vector<int> > h;
	// h["Radhika"].push_back(12345);
	// h["Radhika"].push_back(12345);
	// h["Radhika"].push_back(12345);

	// for(auto node:h){
	// 	cout<<node.first<<"-->";
	// 	node.second[i];
	// }

	h.insert(make_pair("Apple",100));
	h.insert(make_pair("Apple",150));
	pair<string,int> p("PineApple",50);
	h.insert(p);
	h["Banana"]=30;

	for(auto node:h){
		cout<<node.first<<" "<<node.second<<endl;
	}
// -------------------INSERTING FRUIT ----------------
	// Fruit f1("MAngo",10,"Delhi");
	// h.insert("Mango",f1);
	// for(auto node:h){
	// 	cout<<node.first<<" "<<node.second.color<<node.second.shape<<endl;
	// }	
// ------------------------------

	// TO find whether key exists in a map or not
	// string s;
	// s="apple";
	// if(h.count(s)==0){
	// 	cout<<"Not FOund!"<<endl;
	// }
	// else{
	// 	cout<<"FOund"<<endl;
	// }


	return 0;
}