#include<bits/stdc++.h>
using namespace std;

int main(){

	void merge(int a[], int b[], int m, int n){
		int i=0,j=0;
		while(i<m &&j<n){
			if(a[i]<b[j]){
				cout<<a[i++]<<" ";
			}
			else{
				cout<<b[j++]<<" ";
			}
		}

		while(i<m){
			cout<<a[i++]<<" ";
		}
		while(j<n){
			cout<<b[j++]<<" ";
		}
	}
}