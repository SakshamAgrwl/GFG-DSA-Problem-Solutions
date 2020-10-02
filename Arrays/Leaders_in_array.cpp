#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[], int n){
	//last element is always a leader as there is no element after it so it is the greatest
	int curr_leader = arr[n-1];
	cout<<curr_leader<<" ";
	for(int i=n-2;i>=0;i--){
		if(curr_leader =< arr[i]){
			curr_leader = arr[i];
			cout<<curr_leader<<" ";
		}

	}
}

int main(){
	int arr[] = {7,10,4,10,6,5,2};
	int n = sizeof(arr)/sizeof(arr[0]);

	leaders(arr,n);

	return 0;
}