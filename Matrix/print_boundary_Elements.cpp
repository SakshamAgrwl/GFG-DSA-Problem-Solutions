/*given an array 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 26
we have to print array in spiral manner ie 1 2 3 4 8 7 6 5 12 11 10 9 16 15 14 13 */
//Here we go
#include<bits/stdc++.h>
using namespace std;

void spiralTraversal(int M[R][C]){
	if(R==1){
		for(int i=0;i<C;i++){
			cout<<M[0][i]<<" ";
		}
	}
	else if(C==1){
		for(int i=0;i<R;i++){
			cout<<M[i][0]<<" ";
		}
	}
	else{
		for(int i=0;i<C;i++){
			cout<<M[0][C]<<" ";
		}
		for(int i=1;i<R;i++){
			cout<<M[i][C-1]<<" ";
		}
		for(int i=C-2;i>0;i--){
			cout<<M[R-1][i]<<" ";
		}
		for(int i= R-2;i>=1;i--){
			cout<<M[i][0]<<" ";
		}
	}
}