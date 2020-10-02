#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(bool arr[], int n){
	int res = 0;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			int curr = 0;
		}
		else{
			curr++;
			res = max(res,curr);
		}
	}
	return res;
}