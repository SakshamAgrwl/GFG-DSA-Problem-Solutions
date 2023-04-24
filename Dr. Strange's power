#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	map<int , string>m;
	m[3]="11";m[2]="01";m[1]="10";m[0]="00";
	int n,a;
	cin>>n;
	string h;
	while(n--){
	    cin>>a;
	    cin>>h;
	    reverse(h.begin(),h.end());
	    char carry='1';
	    for(int i=0;i<a;i++){
	        if(carry=='0'){break;}
	        int y =((h[i]-48)+ (carry-48));
	        h[i] = m[y][0];
	        carry = m[y][1];
	    }
	    if(carry=='1'){h+='1';}
	    reverse(h.begin() , h.end());
	    cout<<h<<endl;
	}
	return 0;
}
