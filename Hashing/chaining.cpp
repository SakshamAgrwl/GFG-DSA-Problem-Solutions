#include<bits/stdc++.h>
using namespace std;

//create a structure
struct myHash{
	int BUCKET;
	//define a pointer to the list
	list<int> *table;
	//define a constructor
	myHash(int b){
		BUCKET = b;
		table = new list<int>[BUCKET];
	}
	void insert(int key){
		int i = key % BUCKET;
		table[i].push_back(key);
	}

	bool search(int key){
		int i = key % BUCKET;
		for(auto x:table[i]){
			if(x==key){
				return true;
			}
		}
		return false;
	}

	void remove(int key){
		int i = key % BUCKET;
		table[i].remove[key];
	}
};

int main(){
	myHash mh(7);
	mh.insert(10);
	mh.insert(20);
	mh.insert(15);
	mh.insert(7);
	cout<<mh.search(10)<<endl;
	mh.remove(15);
	cout<<mh.search(15)<<endl;

	return 0;
}