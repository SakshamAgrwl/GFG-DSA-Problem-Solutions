#include<bits/stdc++.h>
using namespace std;

int power(int a, int n){
	if(n==0){
		return 1;
	}
	return a*power(a,n-1);
}

int fastPower(int a, int n){
	if(n==0){
		return 1;
	}

	int smaller_ans = fastPower(a,n/2);
	smaller_ans *= smaller_ans;

	//if n is odd
	if(n&1){
		return smaller_ans*a;
	}
	return smaller_ans;
}