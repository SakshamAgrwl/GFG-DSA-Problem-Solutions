#include <bits/stdc++.h> 
using namespace std; 
  
// function to check if there exist four 
// elements whose sum is equal to k 
bool findfour(int arr[], int n, int k) 
{ 
    // map to store sum and indexes for 
    // a pair sum 
    unordered_map<int, vector<pair<int, int> > > hash; 
  
    for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j < n; j++) { 
  
            // calculate the sum of each pair 
            int sum = arr[i] + arr[j]; 
  
            // if k-sum exist in map 
            if (hash.find(k - sum) != hash.end()) { 
                auto num = hash.find(k - sum); 
                vector<pair<int, int> > v = num->second; 
  
                // check for index coincidence as if 
                // there is a common that means all 
                // the four numbers are not from 
                // different indexes and one of the 
                // index is repeated 
                for (int k = 0; k < num->second.size(); k++) { 
  
                    pair<int, int> it = v[k]; 
  
                    // if all indexes are different then 
                    // it means four number exist 
                    // set the flag and break the loop 
                    if (it.first != i && it.first != j &&  
                        it.second != i && it.second != j) 
                        return true; 
                } 
            } 
  
            // store the sum and index pair in hashmap 
            hash[sum].push_back(make_pair(i, j)); 
        } 
    } 
    hash.clear(); 
    return false; 
} 
  
// Driver code 
int main() 
{ 
    int k = 7; 
    int arr[] = { 1, 5, 1, 0, 6, 0 }; 
    int n = 6; 
    if (findfour(arr, n, k)) 
        cout 
            << "YES" << endl; 
    else
        cout << "NO" << endl; 
    return 0; 
} 
