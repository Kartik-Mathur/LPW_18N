// Trie
#include <iostream>
#include <unordered_map>
using namespace std;

class node{
public:
	char data;
	bool isTerminal;
	unordered_map<char,node*> h;

	node(char d){
		data=d;
		isTerminal=false;
	}
};

class Trie{
	node* root;
public:
	Trie(){
		root=new node('\0');
	}

	void addWord(char *a){
		node* temp=root;
		for(int i=0;a[i]!='\0';i++){
			char ch=a[i];
			if(temp->h.count(ch)==0){
				node* n=new node(ch);
				temp->h[ch]=n;
				temp=temp->h[ch];
			}
			else{
				temp=temp->h[ch];
			}

		}
		temp->isTerminal=true;
	}

	bool SearchWord(char *a){
		node* temp=root;
		for(int i=0;a[i]!='\0';i++){
			char ch=a[i];
			if(temp->h.count(ch)==0){
				return false;
			}
			else{
				temp=temp->h[ch];
			}
		}
		return temp->isTerminal;
	}

};



int main(){
	Trie t;

	t.addWord("Not");
	t.addWord("No");
	t.addWord("Code");
	t.addWord("Coder");
	char a[100];
	while(1){
		cin>>a;
		if(t.SearchWord(a)){
			cout<<"Exists"<<endl;
		}
		else{
			cout<<"Not Exists"<<endl;
		}
	}


	return 0;
}