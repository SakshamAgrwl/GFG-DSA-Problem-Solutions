// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//arr1,arr2 : the arrays
// n, m: size of arrays
void merge(vector<int>& v, int arr1[], int arr2[], int n, int m){
    int i=0,j=0;
    while(i<n && j<m){
        v.push_back(arr1[i]<arr2[j] ? arr1[i++] : arr2[j++]);
    }
    while(i<n){
        v.push_back(arr1[i++]);
    }
    while(j<m){
        v.push_back(arr2[j++]);
    }
}
void circumsize(vector<int>&arr){
    // for(int i:arr)
    //     cout<<i<<" ";
    // cout<<endl;
    int  i = 0,j = 0;
    int n = arr.size();
    int temp = arr[0];
    while(j<n){
        if(arr[j]==temp){
            j++;
        }else{
            arr[i++] = temp;
            temp = arr[j];
            // j++;
        }
    }
    arr[i] = temp;
    // cout<<i<<endl;
    arr.resize(i+1);
}
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
   vector<int>v;
    merge(v,arr1,arr2,n,m);
    circumsize(v);
    return v;
}

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;