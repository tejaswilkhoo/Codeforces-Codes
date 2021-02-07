#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int w;
	cin>>w;
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	int counter = 0;
	int totalCounter = 0;
	int currentSum = 0;
	for(int i=0; i<n; i++)
	{
		if(currentSum<=w && counter < 4)
		{
			currentSum+=arr[i];
			if(currentSum<=w)
			{
				counter++;
				totalCounter++;
			}
			else
			{
				i = 1000000;
			}
		}
		else if(currentSum<=w && counter == 4)
		{
			currentSum-=arr[i-4];
			currentSum+=arr[i];
			if(currentSum<=w)
			{
			totalCounter++;		
			}
			else
			{
				i = 1000000;
			}
		}
		else
		{
			i = 1000000;
		}
	}
	cout<<totalCounter;
}
