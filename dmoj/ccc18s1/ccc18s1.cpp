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
	
	double arr[n];
	
	for (int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	sort (arr, arr+n);
	
	//for (int i=0; i<n; i++)
	//{
		//cout<<arr[i]<<endl;
	//}

	double minlength = 10000000000;
	double templength;
	for (int i=1; i<(n-1); i++)
	{
		templength = ( ((arr[i]-arr[i-1])/2) + ((arr[i+1]-arr[i])/2) );
		//minlength = min(minlength , templength);
	//	cout<<minlength<<endl;
		if(templength<minlength)
		{
			minlength = templength;
		}
	}
	
	cout<<fixed<<setprecision(1)<<minlength;
}
