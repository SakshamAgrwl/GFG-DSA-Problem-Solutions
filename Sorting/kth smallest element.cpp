#include<bits/stdc++.h>
using namespace std;

void lomitoPartition(int arr[],int l, int h){
	int pivot = arr[h];
	int i = l-1;
	for(int j = l;j<=h-1;j++){
		if(arr[j] <= pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[h]);
	return (i+1);
}

int kthSmallest(int arr[], int n, int k){
	int l = 0, h = n-1;
	int mid = (l+h)/2;
	while(l<=h){
		int p = lomitoPartition(arr,l,h);
		if(p==k-1){
			return p;
		}
		else if(p>k-1){
			l = mid+1;
		}
		else{
			h = mid-1;
		}
	}
	return -1;

}