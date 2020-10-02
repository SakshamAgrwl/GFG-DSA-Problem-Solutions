#include<bits/stdc++.h>
using namespace std;

int intersection(int a[], int b[], int m, int n){
	//we will use unordered set
	unordered_set<int> s;
	//traverse in the first array
	for(int i=0;i<m;i++){
		s.insert(a[i]);
	}
	int res = 0;

	for(int j=0;j<n;j++){
		if(s.find(b[j])!= s.end()){
			res++;
			//erase the repeated elements
			s.erase(b[j]);
		}
	}
	return res;

}