#include<bits/stdc++.h>
using namespace std;


void quadraticRoots(int a,int b, int c)
{
    int root1 = 0, root2 = 0;
    int temp = (pow(b, 2) - 4*a*c); //value of b^2-4ac
    
    if(temp < 0)//if b^2-4ac is less then zero then roots are imaginary
        cout<<"Imaginary";
    else
    {
	    root1 = floor((-b + sqrt(temp))/(2 *a)); //root1
	    root2 = floor((-b - sqrt(temp))/(2 *a));//root2
	    cout<< max(root1,root2) << " " << min(root1,root2); //print the answer
    }
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;

		quadraticRoots(a,b,c);
		cout<<endl;
	}

	return 0;
}