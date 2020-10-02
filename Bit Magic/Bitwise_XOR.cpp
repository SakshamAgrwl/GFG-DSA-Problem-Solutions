#include<bits/stdc++.h>
using namespace std;

int fun(int a[], int n){
	int x = a[0];    //assigning variable x the first value of array a which is 9
	for(int i=0;i<n;i++){
		x = x^a[i];       //performing XOR in all array elements in array
	}

	return x;
}

int main(){
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<fun(a,n)<<endl;

	return 0;
}