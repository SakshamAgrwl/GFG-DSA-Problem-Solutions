#include <bits/stdc++.h>
using namespace std;

int posOfRightMostDiffBit(int m, int n){
	return ffs(m^n);  //ffs function is used to return the most significant bit or least significant bit
}                     //we perform XOR operation on m and n we will get 0 and 1 the position where we will get 1 we return it using ffs fucntion

  
int main(){

    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         cout << posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Drive
