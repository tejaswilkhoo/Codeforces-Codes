#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int n;
	cin>>n;
	
	string firstarr[n];
	string secondarr[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>firstarr[i];
	}
	for(int i=0; i<n; i++)
	{
		cin>>secondarr[i];
	}
	
	int findCounter = 0;
	int checkVal = 0;
	for(int i=0; i<n; i++)
	{
		if(firstarr[i] == secondarr[i])
		{
			checkVal = -1;
			i = 50;
		}
		
		else
		{
			for(int j=0; j<n; j++)
			{
				if(firstarr[j] == secondarr[i])
				{
					findCounter = j;
					j = 50;
				}
			}
			if(secondarr[findCounter] != firstarr[i])
			{
				checkVal = -1;
				i = 50;
			}
		}
	}
	checkVal == 0 ? cout<<"good" : cout<<"bad";
}
