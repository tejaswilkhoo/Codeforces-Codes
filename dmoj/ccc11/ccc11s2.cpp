#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int n;
	cin>>n;
	
	string grades[n];
	for(int i=0; i<n; i++)
		cin>>grades[i];
	
	string results[n];
	for(int i=0; i<n; i++)
		cin>>results[i];
	
	int counter = 0;
	for(int i=0; i<n; i++)
		if(grades[i] == results[i])
			counter++;

	cout<<counter;
}
