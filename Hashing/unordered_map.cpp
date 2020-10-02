#include<iostream>
#include<unordered_map> 
using namespace std;

int main(){
	unordered_map<string,int> m;
	//assigning a string key and an integer value to that key
	m["GFG"] = 20;
	m["ide"] = 30;
	//insert a key and value using insert function
	m.insert({"courses",15});
	for(auto x:m){
		cout<<x.first<<" "<<x.second<<endl;
	}
	return 0;
}