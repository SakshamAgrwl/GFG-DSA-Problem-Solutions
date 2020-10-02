#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){
	int low  = 0;
	int high = n-1;

	while(low<high){
		int mid = (low+high)/2;

		if(mid == key){
			return mid;
		}

		else if(mid<key){
			low = mid+1;
		}

		else{
			high = mid-1;
		}
	}

	return -1;
}

int main(){
	int n,key;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<"Enter the element you want to search:";
	cin>>key;

	cout<<binarySearch(arr[],n,key);
}