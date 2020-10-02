#include<bits/stdc++.h>
using namespace std;

bool checkKthBit(int n, int k){
	if(n & (1 << k)){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int k;
		cin>>key;

		if(checkKthBit(n,k)){
			cout<<"It is set ";
		}
		else{
			cout<<"Not set";
		}
	}

	return 0;
}