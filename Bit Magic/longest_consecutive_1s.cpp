// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

/*  Function to calculate the largest consecutive ones
*   x: given input to calculate the largest consecutive ones
*/
int maxConsecutiveOnes(int x)
{
    int count = 0;
    
    while(x!=0){
        x = (x & (x<<1));
        count++;
    }
    
    return count;
    // Your code here
    
    
}



// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends