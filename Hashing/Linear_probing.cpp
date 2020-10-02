// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> linearProbing(int hashSize,int arr[],int sizeOfArray);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    vector<int> hash;
	    
	    hash = linearProbing( hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}

// } Driver Code Ends


//Complete this function

// insert all the elements of the array arr[] (having size N)
// into the hash table hash[] (having size hashSize)
vector<int> linearProbing(int hashSize, int arr[], int N){
     
    int hash_key;
    vector<int> v(hashSize, -1);
    
    for(int i=0; i<N; ++i)
    {
        hash_key = arr[i] % hashSize;
        if(v[hash_key] == -1)
            v[hash_key] = arr[i];
        else
        {
            auto itr = find(v.begin()+hash_key+1, v.end(), -1); // Find empty space between hash_key+1 and v.end()
            if(itr == v.end())                                  // If empty space not found between hash_key v.end()
                itr = find(v.begin(), v.begin()+hash_key, -1);  // Find empty space between v.begin() and hash_key-1
            if(itr == v.end() || itr == v.begin()+hash_key)     // If there is no empty space left in hash table
                break;
            *itr = arr[i];
        }
    }
    
    return v;
   
}
