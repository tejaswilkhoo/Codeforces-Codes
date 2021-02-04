#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int n;
	cin>>n;
	
	string sVals;
	string SVALS;
	string tVals;
	string TVALS;
	
	sVals = 's';
	SVALS = 'S';
	tVals = 't';
	TVALS = 'T';
	
	int sCount = 0;
	int tCount = 0;
	
	string str;
	for(int i=0; i<n+1; i++)
	{
		getline(cin, str); 
		
		int length = str.length();
		
		for (int i = 0; i < length; i++) 
		{
			if (sVals == str.substr(i, 1) || SVALS == str.substr(i, 1)) 
			{
				sCount++;
			}
		}

		for (int i = 0; i < length; i++) 
		{
			if (tVals == str.substr(i, 1) || TVALS == str.substr(i, 1)) 
			{
				tCount++;
			}
		}
	}
	
	tCount>sCount ? cout<<"English" : cout<<"French";
}
