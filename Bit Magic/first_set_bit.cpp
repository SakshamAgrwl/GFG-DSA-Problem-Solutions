#include<bits/stdc++.h>
using namespace std;

unsigned int getFirstSetBit(int n){
	return log2(n & -n) + 1;        //this is the formula to find the position of first set bit
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<getFirstSetBit(n);
	}

	return 0;

}