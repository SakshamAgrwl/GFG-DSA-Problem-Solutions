/**IN thsi program we need to find to find the maximum difference from
left to right in array
and then we need to return the maximum difference**/
#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n){
	int res= arr[1]-arr[0];
	min_val = arr[0];
	for(int j=1;j<n;j++){
		res = max(res,arr[j]-min_val);
		min_val = min(min_val,arr[j])
	}

	return res;
}