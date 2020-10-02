#include<bits/stdc++.h>
using namespace std;

void printNTo1(int n){
	if(n==0){
		return;
	}
	cout<<n<<" ";

	printNTo1(n-1);
}


int main(){
	int n;
	cin>>n;

	printNTo1(n);

	return 0;
}