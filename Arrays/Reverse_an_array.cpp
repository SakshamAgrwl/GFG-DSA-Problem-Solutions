#include<bits/stdc++.h>
using namespace std;

void reverse(int a[], int n){
	int low = 0,  high = n-1;

	while(low<high){
		int temp = a[low];
		a[low] = a[high];
		a[high] = temp;
		low++;
		high--;
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	reverse(a,n);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}