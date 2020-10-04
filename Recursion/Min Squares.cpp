#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
 if(n<=0){return 0;}
if(n==1){return 1;}
if(n==2){
    return 2;
}
int ans=INT_MAX;
for(int i=1;i*i<=n;i++)
{
    int temp=1+solve(n-(i*i));
    ans=min(ans,temp);
}
return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}
