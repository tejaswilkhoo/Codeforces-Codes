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
	int k;
	cin>>k;
	int sum;
	int arr[k];

	
	int zerocounter;
	for(int i=0; i<k; i++)
	{
		zerocounter = 1;
		cin>>arr[i];
		
		if(arr[i]==0)
		{		
			while(arr[i-zerocounter] == 0)
			{
				zerocounter++;
			}
			arr[i-zerocounter] = 0;
		}
	}
	for (int i=0; i<k; i++)
	{
	//	cout<<arr[i]<<endl;
		sum+=arr[i];
	}
	cout<<sum;
}
