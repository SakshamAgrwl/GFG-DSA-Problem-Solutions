#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n = 6; 
	//float arr[n];
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434}; 
	

	for(int i = 0; i < n; i++)
		cout << arr[i];

	vector<float> vec[n];
	
	for(int i = 0; i < n; i++)
	{
		int index = arr[i] * 10;
		vec[index].push_back(arr[i]);
	}
	
	
	for(int i = 0; i < n; i++)
		sort(vec[i].begin(), vec[i].end());

	int index = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j =	0; j < vec[i].size(); j++)
			arr[index++] = vec[i][j];
	}
	
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	
}
