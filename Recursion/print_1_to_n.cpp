#include<bits/stdc++.h>
using namespace std;

void print1ToN(int N){
	if (N==0){
		return;
	}

	print1ToN(N-1);
	cout<<N<<" ";
}

int main(){
	int N;
	cin>>N;

	print1ToN(N);

	return 0;
}