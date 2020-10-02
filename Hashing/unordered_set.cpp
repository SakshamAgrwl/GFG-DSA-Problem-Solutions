#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
	//define an unordered set
	unordered_set<int> s;
	//now we will insert values in the unordered set or hash
	s.insert(15);
	s.insert(5);
	s.insert(10);
	s.insert(20);

	//now we will iterate in the unordered set
	for(auto it=s.begin();it!=s.end();it++){
		cout<<(*it)<<" ";
	}
	cout<<endl;
	cout<<s.size()<<" ";
	s.clear();
	cout<<s.size()<<" ";
}