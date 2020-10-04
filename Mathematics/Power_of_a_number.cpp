#include<bits/stdc++.h>
using namespace std;

long long power(long long a, long long b){ // calculate a^b

    long long res = 1;

    if(b<0) return 0;

    while(b){
        if(b&1) res = res * a;
        a = a * a;
        b>>=1;
    }

    return res;
}


int main(){
	int T;
	cin>>T;
	while(T--){
		int N, b;
		cin>>N>>b;
		cout<<power(N, b)<<endl;
	}

	return 0;
}