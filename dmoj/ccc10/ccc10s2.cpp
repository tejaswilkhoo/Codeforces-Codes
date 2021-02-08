#include <bits/stdc++.h>
using namespace std;  

int main()
{
	int k;
	cin>>k;
	
	string inputs[k][2];
	for(int i=0; i<k; i++)
	{
		cin>>inputs[i][0];
		cin>>inputs[i][1];
	}
	
	string finalVal;
	cin>>finalVal;
	int length = finalVal.length();
	string printResults;
	
	for(int i=0; i<length; i+=0)
	{
		for(int j=0; j<k; j++)
		{
			if(inputs[j][1]==finalVal.substr(i,inputs[j][1].length()))
			{
				printResults += inputs[j][0];
				i+=inputs[j][1].length();
			}
		}
	}
	cout<<printResults;
}
