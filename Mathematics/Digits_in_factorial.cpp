//We need to count the digits of a factorial of a number
// if we forst calculate factorial and store that number in a variable then it throws an error as value is too large
//so in this prograrm we will use log so that log(N!) = log(a) + log(B)+......

#include<bits/stdc++.h>
using namespace std;

int digitsInFactorial(int N){
	if(N==0){
		return 0;
	}

	if(N<=1){
		return 1;
	}

	double digits = 0;
	for(int i=2;i<=N;i++){
		digits+=log10(i);
	}

	return floor(digits) + 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int N;
		cin>>N;
		cout<<digitsInFactorial(N)<<endl;
	}

	return 0;
}