//problem link: https://practice.geeksforgeeks.org/problems/subarrays-with-sum-k/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        int count = 0;
        unordered_map<int,int> mp;
        int curr_sum = 0;
        
        for(int i=0;i<N;i++){
            curr_sum += Arr[i]; 
            
            if(curr_sum == k){
                count++;
             }
             
             int val = curr_sum-k;
        
            if(mp[val]){
                
                count += mp[curr_sum-k];
            }
            
            mp[curr_sum]++;
        
        }
        
        
        
        
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.findSubArraySum(Arr, N, k)<<endl;
    }
    return 0;
}