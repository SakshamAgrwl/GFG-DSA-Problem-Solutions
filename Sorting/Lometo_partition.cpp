#include<bits/stdc++.h>
using namespace std;

void lometoPartition(int arr[],int l, int h){
	int pivot = arr[h]; //always last element
	int i = l-1;
	for(int j=l;j<=h-1;j++){
		if(arr[j] <=  pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[h]);
	return (i+1);
}