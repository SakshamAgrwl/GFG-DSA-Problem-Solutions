#include<bits/stdc++.h>
using namespace std;

void reverseWords(string s){
	int start = 0;
	for(int end= 0;end<s.length();end++){
		if(s[end] == ' '){
			reverse(s.begin() + start,s.begin() + end);
			start = end + 1;
		}
	}

    //reverse the last word
	reverse(s.begin() + start,s.end());

	//reverse the entire string
	reverse(s.begin(),s.end());
}

int main(){
	
    string s = "i like this program very much";
    reverseWords(s);
    cout << s;
    return 0;
}