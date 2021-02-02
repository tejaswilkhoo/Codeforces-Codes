#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int n = 10000;
	string names[n];
	int values[n];
	
	int g = 1;
	cin>>names[0]>>values[0];	
	for(int i=1; names[i-1]!="Waterloo"; i++)
	{
		cin>>names[i]>>values[i];
		g++;
	}
	
	int coldest = 0;
	for(int i=1; i<g; i++)
	{
		if(values[i]<values[coldest])
		{
			coldest = i;
		}
	}
	cout<<names[coldest];
}
