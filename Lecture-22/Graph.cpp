#include <iostream>
#include <map>
#include <list>
using namespace std;

class Graph{
	map<string,list<pair<string,int> > > h;
public:

	void addEdge(string u,string v,int d,bool bidir=true){
		h[u].push_back(make_pair(v,d));
		if(bidir){
			h[v].push_back(make_pair(u,d));
		}
	}

	void print(){

		for(auto node:h){
			cout<<node.first<<"-->";
			for(auto neighbours:node.second){
				cout<<"("<<neighbours.first<<","<<neighbours.second<<")";
			}
			cout<<endl;
		}

	}


};

int main(){
	Graph g;

	g.addEdge("Amritsar","Jaipur",4);
	g.addEdge("Amritsar","Agra",1);
	g.addEdge("Delhi","Agra",1);
	g.addEdge("Delhi","Jaipur",2);
	g.addEdge("Mumbai","Jaipur",8);
	g.addEdge("Mumbai","Bhopal",3);
	g.addEdge("Agra","Bhopal",2);

	g.print();





	return 0;
}