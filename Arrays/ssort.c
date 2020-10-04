
 
 /******************************************************************************

selection sort

*******************************************************************************/
#include<stdio.h>
int min(int [], int);
 void main()
 {
 	int a[]={1,23,24,65,90,13,55},i,loc,temp;
 	for(i=0;i<6;i++)
 	{
 		loc=min(a,i);
 		temp=a[i];
		a[i]=a[loc];
		a[loc]=temp; 
	}
	for(i=0;i<7;i++)
	{
		printf("%d\n",a[i]);
	}
 }
 int min(int a[],int i)
 {
 	int j,loc=i;
 	int key=a[i];
 	for(j=i+1;j<7;j++)
 	{
 		if(key>a[j])
 		{
 			loc=j ;
 			key=a[j];
		 }
	 }
	return loc; 
 }
