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
//	cout<<endl;
	for(int i=0; i<n; i++)
	{
		arr[i] = i+1;
//		cout<<arr[i]<<endl;
	}
//	cout<<endl;
	
	
	int m;
	cin>>m;
	
	for(int a=0; a<m; a++)
	{
	
	int pos;	
	cin>>pos;

		for (int pos2 = pos; pos2<n+1; pos2+=(pos-1))
		{
			for(int i=pos2-1; i<n-1; i++)
			{
				arr[i] = arr[i + 1];
			}

			n--;

			//cout<<"\nElements of array after delete are : \n";
			//for(int i=0; i<n; i++)
			//{
				//cout<<arr[i]<<endl;
			//}
		}
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
}
