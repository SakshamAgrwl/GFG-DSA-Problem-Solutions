
#include <bits/stdc++.h> 
using namespace std; 

void countFreq(int arr[], int n) 
{ 
	unordered_map<int, int> mp; 

	// Traverse through array elements and 
	// count frequencies 
	for (int i = 0; i < n; i++) 
		mp[arr[i]]++; 

	// To print elements according to first 
	// occurrence, traverse array one more time 
	// print frequencies of elements and mark 
	// frequencies as -1 so that same element 
	// is not printed multiple times. 
	for (int i = 0; i < n; i++) { 
	if (mp[arr[i]] != -1) 
	{ 
		cout << arr[i] << " " << mp[arr[i]] << endl; 
		mp[arr[i]] = -1; 
	} 
	} 
} 

int main() 
{ 
	int n;
	cout<<"enter the size of array\n";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	countFreq(arr, n); 
	return 0; 
} 

