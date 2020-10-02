//in this program we need to find an equilibrium point
//in an array, it is a point in which
// sum of array elements to the left of that point
//is equal to sum of elements to its right
#include<bits/stdc++.h>
using namespace std;

int equilibriumPoint(int arr[], int n){
	int sum = 0;
	//first we will calcualte the sum 
	//of all array elements
	for(int i=0;i<n;i++){
		sum += arr[i];
	}
    //nitiliaizd left sum as 0
	int l_sum = 0;

	for(int i=0;i<n;i++){
		sum -= arr[i];

		if(l_sum == sum){
			return i+1;  //since we are following 1-based indexing
		}

		lsum += arr[i];
	}

	return -1;

}

int main()
{
	/* code */
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		int arr[n];

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		cout<<equilibrium(arr[],n)<<endl;
	}
	return 0;
}