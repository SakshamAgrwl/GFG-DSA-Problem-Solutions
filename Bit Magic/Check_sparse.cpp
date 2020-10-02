#include<bits/stdc++.h>
using namespace std;

bool checkSparse(int n){
	if(n & (n >> 1)){
		return false;
	}

	return true;
}

int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		if(checkSparse(n)){
			cout<<"It is sparse";
		}
		else{
			cout<<"Not Sparse";
		}
	}

	return 0;

}