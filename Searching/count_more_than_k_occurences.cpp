// { Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countOccurence(int arr[], int n, int k);
// Position this line where user code will be pasted.

/* Driver program to test above function */
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        cout << countOccurence(arr, n, k) << endl;
    }
    return 0;
}
// } Driver Code Ends


// Function to find element with count more than n/k times
// arr: input array
int countOccurence(int arr[], int n, int k) {
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    int a[max+1] = {0};
    //we will store the count of all elements in a array
    for(int i=0;i<n;i++){
        a[arr[i]]++;
    }
    
    int count = 0;
    
    for(int i=0;i<max+1;i++){
        if(a[i] > n/k){
            count++;
        }
    }
    return count;
}