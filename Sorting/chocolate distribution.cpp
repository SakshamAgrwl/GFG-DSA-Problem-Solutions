#include<bits/stdc++.h>
using namespace std;

int minDiff(int arr[], int n, int m){ //here m is the no of students
	if(m>n){
		return -1;
	}

	sort(arr, arr+n);

	int res = arr[m-1]-arr[0];
	for(int i=1;i<(i+m-1);i++){
		res = min(res,arr[i+m-1]-arr[0]);
	}
	return res;
}