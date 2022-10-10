//probelm link: https://practice.geeksforgeeks.org/problems/professor-and-parties2000/1


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    
    string PartyType(long long int a[], int n)
    {
        unordered_map<long long,long long> mp;
        
        for(long long i=0;i<n;i++){
            mp[a[i]]++;
        }
        
        for(auto x: mp){
            
            if(x.second > 1){
                return "BOYS";
            }
            
        }
        return "GIRLS";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        long long int a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        Solution ob;
        cout<< ob.PartyType(a, n) <<endl;
        
    }
    return 0;
}

// } Driver Code Ends