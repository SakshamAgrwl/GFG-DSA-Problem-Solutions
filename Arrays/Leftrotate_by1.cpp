/**In this program we are given an array and we need to left rotate it by 1. 
Meaning that the element at first index will go at last index and last at
second last**/
#include<bits/stdc++.h>
using namespace std;

void leftRotateby1(int arr[], int n){
	//create a new variable temp that stores the first element of array
	int temp = arr[0];
	for(int i=1;i<n;i++){
		//shift all elements to one position back
		arr[i-1] = arr[i];		
	}
	arr[n-1] = temp;
}

int main(){
	int arr[] = {23,45,56,43,67,90,12,24};
	int n = sizeof(arr)/sizeof(arr[0]);
	leftRotateby1(arr,n);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;

}