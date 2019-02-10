#include <iostream>
#include <map>
#include <list>
#include <set>
#include <climits>
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

	void SSSP(string src,string des){
		map<string,int> dist;
		map<string,string> parentOfchild;

		for(auto node:h){
			dist[node.first]=INT_MAX;
		}

		dist[src]=0;
		parentOfchild[src]=src;
		set<pair<int,string> > s;

		s.insert(make_pair(0,src));
		while(!s.empty()){
			auto p=*(s.begin());
			string parent=p.second;
			int parentDist=p.first;
			s.erase(s.begin());
			for(auto children:h[parent]){
				if(dist[children.first]>parentDist+children.second){
					auto f=s.find(make_pair(dist[children.first],children.first));

					if(f!=s.end()){
						s.erase(f);
					}
					parentOfchild[children.first]=parent;
					dist[children.first]=parentDist+children.second;
					s.insert(make_pair(dist[children.first],children.first));
				}
			}
		}

		for(auto node:dist){
			cout<<"Distance of "<<node.first<<" from "<<src<<" : "<<node.second<<endl;
		}

		string temp=des;
		while(temp!=src){
			cout<<temp<<"<--";
			temp=parentOfchild[temp];
		}
		cout<<src<<endl;


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

	// g.print();
	g.SSSP("Amritsar","Mumbai");


	return 0;
}