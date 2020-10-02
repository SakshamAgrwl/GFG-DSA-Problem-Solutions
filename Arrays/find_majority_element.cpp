#include<bits/stdc++.h>
using namespace std;

int findMajority(int arr[], int n){
	int res= 0, count = 1;

	for(int i=0;i<n;i++){
		if(arr[res] == arr[i]){
			count++;
		}
		else{
			count--
		}

		if(count==0){
		  res=i;
		  count = 1;
	    }
	}
	return res;
}

bool isMajority(int arr[], int n, int cand) 
{ 
    int count = 0; 
    for (int i = 0; i < size; i++) 
      
    if (arr[i] == cand) 
    count++; 
          
    if (count > n/2) 
    return 1; 
      
    else
    return 0; 
} 

void printMajority(int a[], int size) 
{ 
   /* Find the candidate for Majority*/
   int cand = findCandidate(a, size); 
  
   /* Print the candidate if it is Majority*/
   if (isMajority(a, size, cand)) 
   cout << " " << cand << " "; 
     
   else
   cout << "No Majority Element"; 
} 
  
  
/* Driver function to test above functions */
int main() 
{ 
    int a[] = {1, 3, 3, 1, 2}; 
    int size = (sizeof(a))/sizeof(a[0]); 
      
    // Function calling 
    printMajority(a, size); 
      
    return 0; 
} 