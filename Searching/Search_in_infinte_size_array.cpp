#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int low, int high,int x){
	while(low<=high){
		int mid = (low + high);
		if(arr[mid] == x){
			return mid;
		}
		else if(arr[mid] > x){
			return binarySearch(arr[],low, high-1,x);
		}

		return binarySearch(arr[], low + 1,  high,  x);
	}

	return -1;
}


int findPos(int arr[], int x){
	if(arr[0] == x){
		return 0;
	}
	int i;
	while(arr[i] < x){
		i=i*2;
		if(arr[i] == x){
			return i;
		}
	}
	return binarySearch(arr[], i/2+1,i,x);
}