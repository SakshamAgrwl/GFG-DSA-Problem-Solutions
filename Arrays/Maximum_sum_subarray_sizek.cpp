#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k){

	//k must be greater
	if(n<k){
		return -1;
	}

	//compute sum of first window of size k
	int res = 0;
	for(int i=0;i<k;i++){
		res+= arr[i];
	}

	//compute sum of remaining windows of size k
	//by removing first element of previous window
	//and adding last element of
	//current window
	int curr_sum = res;
	for(int i=k;i<n;i++){
		curr_sum+= arr[i] - arr[i-k];
		res = max(res,curr_sum);
	}
	return res;
}

int main(){
	int arr[] = {1,4,2,10,2,3,1,0,20};
	int k = 4;
	int n = sizeof(arr[])/sizeof(arr[0]);
	cout<<maxSum(arr,n,k);

	return 0;
}