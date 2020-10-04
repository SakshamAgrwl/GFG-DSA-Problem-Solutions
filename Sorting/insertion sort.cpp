#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];

	for(int i = 0; i < n; i++)
		cin >> arr[i];

	int hole, temp;

	for(int i = 1; i < n; i++)
	{
		hole = i;
		temp = arr[i];

		while(hole > 0 && temp < arr[hole-1])
		{
			arr[hole] = arr[hole-1];
			hole--;
		}
		arr[hole] = temp;

	for(int t = 0; t < n; t++)
		cout << arr[t] << " " ;
	cout<<endl;
		
	}	
	
	for(int i = 0; i < n; i++)
		cout << arr[i] << " " ;
}
