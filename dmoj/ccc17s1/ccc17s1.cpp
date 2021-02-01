#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int n;
	cin>>n;
	
	int swifts[n];
	int sema[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>swifts[i];
	}
	
	for(int i=0; i<n; i++)
	{
		cin>>sema[i];
	}
	
	
	
	
	//for(int i=0; i<n; i++)
	//{
		//cout<<swifts[i]<<" ";
	//}
	//cout<<endl;
	//for(int i=0; i<n; i++)
	//{
		//cout<<sema[i]<<" ";
	//}
	
	int swiftSum = 0;
	int semaSum = 0;
	int k = 0;
	for(int i=0; i<n; i++)
	{
		swiftSum+=swifts[i];
		semaSum+=sema[i];
		if( (swiftSum-semaSum) == 0)
		{
			k=(i+1);
		}
	}
	cout<<k;
}
