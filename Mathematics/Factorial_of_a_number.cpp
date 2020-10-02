#include<bits/stdc++.h>
using namespace std;

long long factorial(int N){
	if(N==0){
		return 1;
	}

	return N * factorial(N-1);
}


int main(){
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		cout<<factorial(N)<<endl;
	}

	return 0;
}