#include <bits/stdc++.h>

using namespace std;  

int main()
{

	int n;
	cin>>n;
	int arr[n][n];

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int a=0; a<n-1; a++)
	{
		if( (arr[0][a] > arr[0][a+1]) || (arr[a][0] > arr[a+1][0]) )
		{
			int temp[n][n];	
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					temp[i][j] = arr[i][j];
				}
			}
			
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					arr[i][j] = temp[j][(n-i)-1];
				}
			}
			a = -1;
		}
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
