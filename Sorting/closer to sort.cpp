// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends


// Function to find the index of x
// arr[]: input array
// n: size of array
// x: element to find index
int binarySearch(int arr[], int low, int high, int x){
 
    while(low<=high){
        int mid = low + (high-low) / 2;
        
        if(arr[mid] == x){
            return mid;
        }
        if(mid>low && arr[mid-1] == x){
            return (mid-1);
        }
        if(mid < high && arr[mid+1] == x){
            return (mid+1);
        }
        
        if (arr[mid] > x) { 
            return binarySearch(arr, low, mid - 2, x); 
        }
        
        else{
            return binarySearch(arr, mid + 2, high, x); 
        }
    }
    
    return -1;
}

int closer(int arr[],int n, int x)
{
    return binarySearch(arr, 0, n-1, x);

}

// { Driver Code Starts.

int main() {
    
    cin.tie(NULL);
    
	int t;
	cin >> t;
	
	while(t--){
	  
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    int x;
	    cin >> x;
	    
	    int res = closer(arr,n,x);
	    
	    cout << res << endl;
	}
	
	return 0;
}  // } Driver Code Ends