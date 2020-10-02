// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to sort the given array according to
// the difference with K
// A[]: input array
// N: size of array
int aa;
bool comparator(int a, int b){
    if(abs(a-aa) < abs(b-aa)){
        return true;
    }
    return false;
}
void sortABS(int A[],int N, int k)
{
   aa = k;
   stable_sort(A,A+N,comparator);
   
}


// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    
	    int N, diff;
	    cin>>N>>diff;
	    int A[N];
	    
	    for(int i = 0; i<N; i++)
	        cin>>A[i];
	   
	    sortABS(A, N, diff);
	    
	    for(int & val : A)
	        cout<<val<<" ";
	    cout<<endl;
	    
	}
	
	return 0;
}  // } Driver Code End