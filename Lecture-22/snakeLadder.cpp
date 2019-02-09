#include <iostream>
#include <map>
#include <list>
#include <queue>
#include <climits>
using namespace std;

template<typename T>
class Graph{
	map<T,list<T> > adjList;
public:
	void addEdge(T u,T v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}

	void printAdjList(){
		for(auto node:adjList){
			cout<<node.first<<"-->";
			for(auto children:node.second){
				cout<<children<<",";
			}
			cout<<endl;
		}
	}

	int snakeAndLadder(T src,T des){
		map<T,int> dist;
		map<T,T> parent;
		queue<T> q;
		for(auto node:adjList){
			dist[node.first]=INT_MAX;
		}

		q.push(src);	
		dist[src]=0;
		// parent[src]=src;
		while(!q.empty()){
			T node=q.front();
			q.pop();

			for(auto children:adjList[node]){
				if(dist[children]==INT_MAX){
					dist[children]=dist[node]+1;
					q.push(children);
					parent[children]=node;
				}
			}
		}
		// for(auto children:dist){
		// 	cout<<"Distance of "<<children.first<<" from "<<src<<" : "<<children.second<<endl;
		// }
		T temp=des;
		while(temp!=src){
			cout<<temp<<"<--";
			temp=parent[temp];
		}
		cout<<src<<" "<<endl;
		return dist[des];
	}

	void dfsHelper(T src,map<T,bool> &visited){
		cout<<src<<" ";
		visited[src]=true;
		for(auto children:adjList[src]){
			if(!visited[children]){
				dfsHelper(children,visited);
			}
		}
	}

	void dfs(T src){
		map<T,bool> visited;
		dfsHelper(src,visited);
		int component=1;

		for(auto node:adjList){
			if(!visited[node.first]){
				component++;
				dfsHelper(node.first,visited);
			}
		}
		cout<<endl;
		cout<<"No of components "<<component<<endl;
	}

};


int main(){

	Graph<int> g;
	// int board[50] = {0};
	// board[2] = 13;
	// board[5] = 2;
	// board[9] = 18;
	// board[18] = 11;
	// board[17]=-13;
	// board[20] = -14;
	// board[24] = -8;
	// board[25] = -10;
	// board[32] = -2;
	// board[34] = -22;

	// for(int u=0;u<=36;u++){
	// 	for(int dice=1;dice<=6;dice++){
	// 		int v=u+dice+board[u+dice];
	// 		g.addEdge(u,v,false);
	// 	}
	// }

	// cout<<g.snakeAndLadder(0,36)<<endl;
	g.addEdge(0,1);
	g.addEdge(2,1);
	g.addEdge(2,4);
	g.addEdge(2,3);
	g.addEdge(4,3);
	g.addEdge(5,3);
	g.addEdge(0,4);

	g.addEdge(16,10);
	g.addEdge(16,15);
	g.addEdge(6,7);
	g.dfs(0);
	// cout<<endl;	

	return 0;
}