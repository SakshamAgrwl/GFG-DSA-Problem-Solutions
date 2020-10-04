#include <iostream>
#include <math.h>
using namespace std;
float fn(float x)
{   
     return  pow(x,2)+(3*x)+1 ;
}
float de(float x)
{   
     return  2*x + 3 ;
}
int main()
{   float a,e=0,z;
    cout<<"Enter Number ";
    cin>>a;
    do
    {   e++;
        z=a-(fn(a)/de(a));
        cout<<"The iterative "<<e<<" root is "<<z;    
        a=z;
        cout<<endl;
    }while(abs(fn(z))>0.001);
    return 0;
}
