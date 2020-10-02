//In this program we need to return the absolute value of n
//suppose n=-45 then absolute value of n will be -45

#include<bits/stdc++.h>
using namespace std;

int absolute(int n){
	int i = abs(n);
	return i;
}

int main(){
	int T;
	cin>>T;

	while(T--){
		int n;
		cin>>n;
		cout<<absolute(n)<<endl;
	}

}