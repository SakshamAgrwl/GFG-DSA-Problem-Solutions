#include <bits/stdc++.h>
using namespace std;

int operation(int arr[], int N){
    
    unordered_map<int,int> mp;
    int max_count = 0;
    
    for(int i=0;i<N;i++){
        mp[arr[i]]++;
    }
    
    for(auto x:mp){
        if(max_count < x.second){
            max_count = x.second;
        }
    }
    
    return N-max_count;
}

int main() {
	int arr[] = {1, 5, 2, 1, 3, 2, 1};
    int N = sizeof(arr) / sizeof(arr[0]);
    //int k = 12;
    cout << operation(arr, N);
    return 0;
}