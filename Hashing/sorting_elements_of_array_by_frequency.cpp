// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> sortByFreq(int arr[],int n);

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    vector<int> v;
	    v = sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

// } Driver Code Ends


//Complete this function
//Return the sorted array

bool compare(pair<int,int> &a, pair<int,int> &b){
    if(a.second > b.second){
        return true;
    }
    else if(a.second == b.second){
        return a.first < b.first;
    }
    else{
        return false;
    }
}
vector<int> sortByFreq(int arr[],int n)
{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i]) == mp.end()){
            mp.insert(pair<int,int>(arr[i],1));
        }
        else{
           mp[arr[i]]++; 
        }
        
    }
    
    vector<pair<int,int>> v;
    for(auto& it:mp){
        v.push_back(it);
    }
    
    sort(v.begin(),v.end(),compare);
    vector<int> ans;
    
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].second;j++){
            ans.push_back(v[i].first);
        }
    }
    return anss;
   
}