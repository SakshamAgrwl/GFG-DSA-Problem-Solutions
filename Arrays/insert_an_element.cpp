#include<bits/stdc++.h>
using namespace std;

int insert(int arr[], int x, int n, int cap, int pos){
	if(n==cap){
		return n;
	}

	int index = pos-1;

	for(int i= n-1; i>=index; i--){
		arr[i+1] = arr[i];
	}
	arr[index] = x;

	return n+1;
}