#include<bits/stdc++.h>
using namespace std;

int normalMaxSum(int arr[], int n){
	int res = arr[0]; maxEnding = arr[0];
	for(int i = 1 ; i<n; i++){
		maxEnding = max(arr[i], maxEnding + arr[i]);
		res = max(res, maxEnding);
	}

	return res;
}

int overallMaxSum(int arr[], int n){
	int max_normal = normalMaxSum(arr[], n);
	//check if sum < 0
	if(max_normal < 0){
		max_normal = 0;
	}
	 int arr_sum = 0;
	 for(int i=0;i<n;i++){
	 	arr_sum += arr[i];
	 	//inverting the array elements
	 	arr[i] = -arr[i];
	 }

	 int max_circular = arr_sum + normalMaxSum(arr,n);
	 return max(max_normal,max_circular);
}