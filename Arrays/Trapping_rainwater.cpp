/**this is a very famous problem asked in google
in this problem we need to find the maximum water we can store
given the heights of building**/
#include<bits/stdc++.h>
using namespace std;

int getWater(int height[],int n){
	int res = 0;
	int lmax[n], rmax[n];

    //finding the maximum height from left so that water can be preserved
	lmax[0] = height[0];
	for(int i=1;i<n;i++){
		lmax[i] = max(height[i],lmax[i-1]);
	}

	//finding the maximum height from right so that water can be preserved

	rmax[n-1] = height[n-1];
	for(int i=n-2;i>=0;i--){
		rmax[i] = max(rmax[i+1],height[i+1]);
	}

	//now we will start traversing the middle elements of array
	for(int i=1;i<n-1;i++){
		res = res + (min(lmax[i],rmax[i]) - height[i]);
	}

	return res;
}

int main(){
	int height[] = {5,0,6,2,3};
	int n = sizeof(height)/sizeof(height[0]);

	cout<<getWater(height,n);

	return 0;
}