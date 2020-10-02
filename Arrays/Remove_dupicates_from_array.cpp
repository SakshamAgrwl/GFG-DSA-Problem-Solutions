#include<bits/stdc++.h>
using namespace std;

int remDups(int a[], int n){
	int res = 1;
	for(int i=1;i<n;i++){
		if(a[i]!=a[res-1]){
			a[res] = a[i];
			res++;
		}
	}

	return res;
}

int main(){
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<remDups(a, n);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}