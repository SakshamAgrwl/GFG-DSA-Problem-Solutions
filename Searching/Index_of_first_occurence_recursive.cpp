#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int low, int high, int x){
	if(low>high){
		return -1;
	}

	int mid = (high+low)/2;

	if(x>arr[mid]){
		return firstOcc(arr,mid+1,high,x);
	}

	else if(arr[mid] > x){
		return firstOcc(arr,mid,high-1,x);
	}

	else{
		if(mid==0 || arr[mid-1] != arr[mid]){
			return mid;
		}
		else{
			return firstOcc(arr,low,mid-1,x);
		}
	}
	return -1;
}