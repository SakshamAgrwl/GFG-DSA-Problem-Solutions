#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<string,int> m;
	m["gfg"] = 20;
	m["ide"] = 15;
	m["courses"] = 10;
	//search for an element in map
	// if(m.find("ide") != m.end()){ //if the pointer reaches to last element then return false else found then return true
	// 	cout<<"Found"<<endl;
	// }
	// else{
	// 	cout<<"Not Found"<<endl;
	// }
	// //iterate in the map
	// for(auto it = m.begin();it!=m.end();it++){
	// 	cout<<(it->first)<<" "<<(it->second)<<endl;
	// }

	/* the below code will search for ide
	in the map and if found
	then it will return the value of that key*/
	auto it = m.find("ide");  
	if(it!=m.end()){
		cout<<(it->second)<<endl;
	}
	return 0;
}