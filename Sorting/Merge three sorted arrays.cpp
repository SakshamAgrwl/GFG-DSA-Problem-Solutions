// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

 // } Driver Code Ends





// Function to merge three sorted arrays
// A, B, and C: input sorted arrays
vector<int> merge(vector<int> &A,vector<int> &B)
{
    vector<int> v;
    int i=0,j=0;
    while(i<A.size() && j<B.size())
    {
        if(A.at(i)<=B.at(j))
        {
            v.push_back(A.at(i));
            i++;
        }
        else
        {
            v.push_back(B.at(j));
            j++;
        }
    }
    while(i<A.size())
    {
        v.push_back(A.at(i));
            i++;
    }
    while(j<B.size())
    {
        v.push_back(B.at(j));
            j++;
    }
    return v;
}
vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
{ 
    vector<int> v = merge(A,B);
    vector<int> c = merge(v,C);
    return c;
} 



// { Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<int> A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

  
    printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
} 
  // } Driver Code Ends