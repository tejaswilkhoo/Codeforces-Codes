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
	
	int arr[n];
	int counter = 0;
	int finalcount = 1;

	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]>=arr[i-1])
		{
			counter++;
			finalcount = max(finalcount,counter);
		}
		else
		{
			counter = 1;
		}
	}
	
	cout<<finalcount;
	
	
}
