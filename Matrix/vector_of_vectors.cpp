#include<iostream>
#include<vector>
using namespace std;

int main(){
	int m=3,n=2;

	//declare a vector of vector for rows
	//the below whole method creates a 2d array
	vector<vector<int>> arr;

	for(int i=0;i<n;i++){
		vector<int> v;
		for(int j=0;j<n;j++){
			v.push_back(10);		}
		arr.push_back(v);
	}

	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j]<<" ";
		}
	}

}