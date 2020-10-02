#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x, int low, int high){

	if(low > high){
		return -1;
	}
	
	int mid = (low+high)/2;
	if(	arr[mid] == x){
		return mid;
	}

	else if(arr[mid] > x){
		return binarySearch(arr, low,mid-1,x);
	}

	else{
		return binarySearch(arr,mid+1,high,x);
	}
}