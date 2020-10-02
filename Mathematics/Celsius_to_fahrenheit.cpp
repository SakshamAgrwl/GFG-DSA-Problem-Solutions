//We are given temperature in Celsius, we need to convert it into fahreheit
//and return the value in double in fahrenheit

#include<bits/stdc++.h>
using namespace std;

double cToF(int C){
	double F = (9*C)/5 + 32;     //The point here is that we first seprately multiply celsius with 9 
	return F;                    //and then divide it by 5 so that it returns a double value
}

int main(){
	int T;
	cin>>T;
	while(T--){
		int C;
		cin>>C;
        cout<<cToF(C)<<endl;
	}

	return 0;
}