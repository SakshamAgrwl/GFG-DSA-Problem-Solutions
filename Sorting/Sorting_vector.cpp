#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	vector <int> v =  {5,7,20,10};
	sort(v.begin(),v.end());

	for(int x:v){
		cout<<x<<" ";
	}
	cout<<endl;

	sort(v.begin(),v.end(),greater<int>);

	for(int x : v){
		cout<<x<<" ";
	}
}