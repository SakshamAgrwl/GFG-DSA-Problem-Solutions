#include<bits/stdc++.h>
using namespace std;

int maxlen(int arr[], int n, int sum){
	/* we will use map in this question
	as it will store the value of prefix sum array
	as key and their value as index of prefix sum*/
	unordered_map<int,int> map;
	int prefix_sum = 0, res = 0;

	for(int i=0;i<n;i++){
		prefix_sum += arr[i];

		//if prefix sum is equal to sum
		// then we will put res as i+1 as 
		//we will get the correct answer
		if(prefix_sum == sum){
			res=i+1;
		}

		//now we will store prefix sum and index in map
		if(map.find(prefix_sum) == m.end()){
			m.insert({prefix_sum,i});
		}

		if(map.find(prefix_sum-sum)!=map.end()){
			res = max(res,i-m[prefix_sum-sum])
		}
	}

	return res;
}



 LIKE '[a, e, i, o, u]%'ORDER BY city;