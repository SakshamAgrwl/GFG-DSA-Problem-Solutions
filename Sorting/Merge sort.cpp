#include<bits/stdc++.h>
using namespace std;

void merge(int *A,int *L,int leftCount,int *R,int rightCount) {

	int i,j,k;

	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}

	while(i < leftCount) A[k++] = L[i++];

	while(j < rightCount) A[k++] = R[j++];

}

void mergesort(int *A,int n) {
	
	int mid,i, *L, *R;
	
	if(n < 2) return; 

	mid = n/2;
	
	L = (int*)malloc(mid*sizeof(int)); 
	R = (int*)malloc((n- mid)*sizeof(int)); 
	
	for(i = 0;i<mid;i++) L[i] = A[i]; // creating left subarray
	for(i = mid;i<n;i++) R[i-mid] = A[i]; // creating right subarray

	mergesort(L,mid);  // sorting the left subarray
	mergesort(R,n-mid);  // sorting the right subarray
	merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.
    free(L);
    free(R);
}
int main()
{
	int arr[] = {5, 6, 7, 8 ,9};
	mergesort(arr, 5);

	for(auto a:arr)
		cout<<a<<" ";
}

