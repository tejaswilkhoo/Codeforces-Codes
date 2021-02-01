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
	cout<<endl;
	for(int i=1; i<(n+1); i++)
	{
		arr[i] = i;
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	

	int pos;	
	cin>>pos;

	for(int i=pos-1; i<n-1; i++)
	{
		arr[i] = arr[i + 1];
	}

	/* Decrement array size by 1 */
	n--;

	/* Print array after deletion */
	cout<<"\nElements of array after delete are : \n";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
    
	
}
