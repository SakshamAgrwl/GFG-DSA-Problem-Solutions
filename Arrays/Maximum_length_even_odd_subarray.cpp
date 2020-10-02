#include<bits/stdc++.h>
using namespace std;

int maxEvenOdd(int arr[], int n){
	int curr = 1;
	int result = 1;

	for(int i=1;i<n;i++){
		if((arr[i]%2 == 0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i]%2==0)){
			curr++;
			result = max(result,curr);
		}

		else{
			curr = 1;
		}
	}

	return result;
}

int main(){
	int arr[] = {5,10,20,6,3,8};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<maxEvenOdd(arr,n);

	return 0;
}