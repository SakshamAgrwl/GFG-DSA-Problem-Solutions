#include<bits/stdc++.h>
using namespace std;

int sum1ToN(int n){
	if(n==0){
		return 0;
	}

	return n + sum1ToN(n-1);
}


int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		cout<<sum1ToN(n)<<endl;
	}

	return 0;
}