// we will pass matrix function to our main method
//to see how a 2d matrix can be passed as an argument
#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr[], int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j]<<" ";
		}
	}
}

int main(){
	int m=3,n=2;
	vector<int> arr[m];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			arr[i].push_back(i);
		}
	}

	print(arr);

	return 0;

}