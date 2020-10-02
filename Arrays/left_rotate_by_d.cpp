#include<bits/stdc++.h>
using namespace std;

void leftRotate(int a[], int n){
	reverse(a, 0, d-1);
	reverse(a, d, n-1);
	reverse(a,0,n-1);
}

void reverse(int a[], int low,int high){
	while(low<high){
		swap(a[low], a[high]);
		low++;
		high--;
	}

}