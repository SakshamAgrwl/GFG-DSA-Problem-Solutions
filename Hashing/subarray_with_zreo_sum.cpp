#include<bits/stdc++.h>
using namespace std;

bool isZero(int arr[], int n){
	unordered_set<int> s;
	int prefix_sum = 0;
	for(int i=0;i<n;i++){
		prefix_sum = prefix_sum + arr[i];

		//check if array contains prefix sum
		if(s.find(prefix_sum) != s.end()){
			return true;
		}

		if(prefix_sum == 0){
			return true;
		}
		s.insert(prefix_sum)
	}
	return false;
}

int main()
{
    int arr[] = {5, 3, 9, -4, -6, 7, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<isZero(arr,n);

    return 0;

}   