#include<bits/stdc++.h>
using namespace std;

void fun1(){
	cout<<"Great, have some fun"<<endl;
	fun1();
}

int main(){
	//this program will keep on running as there is no stopping condition as fun1 is called again and again
	fun1();
	return 0;

	//it will result in a segmentation fault error
}