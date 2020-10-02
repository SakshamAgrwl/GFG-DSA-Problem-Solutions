#include<bits/stdc++.h>
using namespace std;

int lastOccur(int arr[], int n, int x){
	int low = 0;
	int high = n-1;

	if(low>high){
		return -1;
	}

	int mid = (low+high)/2;

	if(arr[mid] > x){
		high = mid-1;
	}

	else if(arr[mid] < x){
		low = mid+1;
	}

	else{
		if(arr[mid] == n-1 || arr[mid] != mid+1){
			return mid;
		}
		else{
			low = mid+1;
		}
	}
}

int main(){
	int n,x;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<"Enter the element you want to search:";
	cin>>x;

	cout<<lastOccur(arr,n,x);
}