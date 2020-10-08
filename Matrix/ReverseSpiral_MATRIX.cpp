#include <iostream>
using namespace std;
const int MAX=100;
int m,n,num;
int a[MAX][MAX]={0};
void printsparsematrix(int arr[][MAX],int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;i<n;i++)
		{
			cout<<arr[i][j];
		}
	}
}
void reverse_spiral_traversal(int p, int q)
{
    int down=1, right=1, up=2, left=2;
    if(a[p][q]!=0)
    {
        cout<<p<<" "<<q<<" "<<a[p][q]<<" 1\n";
    }
    while((p<m && q<n) && (p>=0 &&q>=0))
    {
        for(int i=0;i<down;i++ )
        {
            if(p>=0 && q>=0)
            {
                p+=1;
                if(p<m)
                {
                    if(a[p][q]!=0)
                        cout<<p<<" "<<q<<" "<<a[p][q]<<" 1\n";
                }
            }
        }
        down+=2;
        for(int i=0;i<right;i++)
        {
            if(p>=0 && q>=0)
            {
                q+=1;
                if(q<n)
                {
                    if(a[p][q]!=0)
                        cout<<p<<" "<<q<<" "<<a[p][q]<<" 2\n";
                }
            }
        }
        right+=2;
        for(int i=0;i<up;i++)
        {
            if(p>=0 && q>=0)
            {
                p-=1;
                if(p>=0)
                {
                    if(a[p][q]!=0)
                        cout<<p<<" "<<q<<" "<<a[p][q]<<" 3\n";
                }
            }
        }
        up+=2;
        for(int i=0;i<left;i++)
        {
            if(p>=0 && q>=0)
            {
                q-=1;
                if(q>=0)
                {
                    if(a[p][q]!=0)
                        cout<<p<<" "<<q<<" "<<a[p][q]<<" 4\n";
                }
            }
        }
        left+=2;
    }
}




int main() 
{
	// your code goes here
	
	
	
	cin>>m>>n>>num;
	int A[num];
	int rowno[num],colno[num];

	for(int i=0;i<num;i++)
	{
	 
	  cin>>rowno[i]>>colno[i]>>A[i];	
	}
     
	 int k1=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		if(rowno[k1]==i && colno[k1]==j)
		{
			a[i][j]=A[k1];
			k1++;
			}
			else
			a[i][j]=0;
		}
	
	}
	
	int I,J;
	cin>>I>>J;
    
	reverse_spiral_traversal(I, J);
	
	return 0;
}
