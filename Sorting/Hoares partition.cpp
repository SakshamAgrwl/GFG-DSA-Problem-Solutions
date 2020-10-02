#include<bits/stdc++.h>
using namespace std;

void hoarePartition(int arr[], int l, int h){
	int pivot = arr[l];
	int i = l-1, j = h+1;
	while(true){
		do{
			i++;
		}
		while(arr[i]<pivot);

		do{
			j--;
		}
		while(arr[h] > pivot);
		if(arr[i]>=arr[j]){
			return j;
		}
		swap(arr[i],arr[j]);
	}
}