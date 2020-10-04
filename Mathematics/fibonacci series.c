// To print Fibonacci series

#include<stdio.h>
int main()
{
	int a=0,b=1,i,c,n;
	printf("enter no. of elements to be displayed = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);// \t is used for spacing between the no. in a single line.
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
