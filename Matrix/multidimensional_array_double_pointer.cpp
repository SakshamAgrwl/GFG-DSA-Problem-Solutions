#include<bits/stdc++.h>
using namespace std;

int main(){
	int m = 3, n=2;

	//declare the array
	int *arr[m];

    //alocating the size of array
	for(int i=0;i<m;i++){
		arr[i] = new int[n];
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			arr[i][j] = 10;
			cout<<arr[i][j]<<" ";
		}
	}
}