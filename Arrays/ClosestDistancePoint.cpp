#include <iostream>
#include <cmath> 
using namespace std;
int res=9999999;//A global variable to store the minimum distance.
int final_pt[2]; //A global arr\ay to store the two points whose distance is minimum.
void swapping(int &a, int &b)
{     //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array
   while(i < nl && j<nr) 
   {
      if(larr[i] <= rarr[j])
      {
         array[k] = larr[i];
         i++;
      }
      else
      {
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl)
   {       
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr)
   {     
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
     
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}
int mindist(int a[],int n, int lo, int hi) //THis function calculates the minimum distance using divide and conquer
{
 
if(n==1)
return 99999;
if(n==2)
{
    if(hi!=lo)
    {
    if(abs(a[hi]-a[lo])<res)
    {
        res=abs(a[hi]-a[lo]);
        final_pt[0]=a[lo];
        final_pt[1]=a[hi];
    }
    return abs(a[hi]-a[lo]);
    }
    else
    return 999999;
}
int k,delta2,delta3,delta1;
if(n%2!=0)
k=n/2+1;
else
k=n/2;
if(lo<hi/2)
delta1=mindist(a,k,lo,hi/2); //delta1 calculates the minimum distance between consecutive points in the first half using divide and conquer.
else
delta1=mindist(a,n-k,lo,lo+(n-k)/2);

if(lo<hi/2)
delta2=mindist(a,n-k,(hi/2)+1,hi);//delta2 calculates the minimum distance between consecutive points in the second half using divide and conquer
else
delta2=mindist(a,n-k,lo+(n-k)/2+1,hi);
if(lo<hi/2)
{
    delta3=abs(a[(hi/2)+1]-a[(hi/2)]); //delta3 calculates the distance between consecutive point in first half and second half
    if(delta3<res)
    {
        final_pt[0]=a[(hi/2)+1];
        final_pt[1]=a[hi/2];
        res=delta3;
    }
}
else
{
    delta3=abs(a[lo+(n-k)/2+1]-a[lo+(n-k)/2]);
    if(delta3<res)
    {
        final_pt[0]=a[lo+(n-k)/2+1];
        final_pt[1]=a[lo+(n-k)/2];
        res=delta3;
    }
}
    return res;
}
  
int main() 
{
    int t;
    cin >>t;
    while(t--)
    {
    int n;
    cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	mergeSort(a,0,n-1); //Here we are sorting the array.
	int mindis=mindist(a,n,0,n-1);
	cout <<"\nMinimum Distance: "<< mindis <<"\nPoint 1 = "<<final_pt[0]<<" and"<<" Point 2 = "<<final_pt[1];
    }
	return 0;
}
