#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int h){
	int n1 = m-l+1, n2 = h-m;
	int left[n1], right[n2];

	for(int i=0;i<n1;i++){
		left[i] = arr[l+i]; //lcan be in the middle also
	}

	for(int j=0;j<n2;j++){
		right[j] = arr[m+j+1];
	}

	int i=0,j=0,k=l;

	while(i<n1 && j<n2){
		if(left[i]<=right[j]){
			arr[k++] = left[i++];
		}
		else{
			arr[k++] = right[j++];
		}
	}

	while(i<n1){
		arr[k++] = left[i++];
	}
	while(j<n2){
		arr[k++] = right[j++];
	}
}