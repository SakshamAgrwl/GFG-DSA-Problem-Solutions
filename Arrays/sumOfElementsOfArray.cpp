// Program to output sum of elements(int) of array
#include <bits/stdc++.h>
using namespace std;

//function to return the sum of elements of array
int sumOfElements( int arr[], int n ) {
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
 }
 
 //driver function
 int main(){
 int n; //size of array
 cin>>n;
 int a[n]; //integer array of size n
 for(int i=0; i<n; i++)
 cin>>a[i];
 int ans= sumOfElements( a, n);
 cout<<"Sum of elements of array is"<<ans;
 return 0;
 }
