// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long toh(int n, int from, int to, int aux);

int main() {

    int T;
    cin >> T;
    while (T--) {
        long long moves = 0;
        int N;
        cin >> N;
        moves = toh(N, 1, 3, 2);
        cout << moves << endl;
    }
    return 0;
}



 // } Driver Code Ends


// You need to complete this function

// avoid space at the starting of the string in "move disk....."
long long toh(int N, int from, int to, int aux) {
    int count = 0;
    if (N == 1)  
    {  
        cout << "move disk 1 from rod " << from <<  
                            " to rod " << to<<endl;  
        return count + 1;                            

    }  
    
    if(N>0){
         count = toh(N - 1, from, aux, to);  
    cout << "move disk " << N << " from rod " << from<< 
                                " to rod " << to<< endl;  
    count++;
    count += toh(N - 1, aux, to, from);  
    
    }
    
   
    return count;
   
    // Your code here
}