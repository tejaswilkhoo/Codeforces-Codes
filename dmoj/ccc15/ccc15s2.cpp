#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int n;
	int a;
	cin>>n;
	cin>>a;
	
	string possibles[n];
	for(int i=0; i<n; i++)
	{
		cin>>possibles[i];
	}
	
	string athletes[a][2];
	for(int i=0; i<a; i++)
	{
		for(int j=0; j<2; j++)
		{
			cin>>athletes[i][j];
		}
	}
	
	string iVal;
	int counter = 0;
	int g;
	for(int i=0; i<a; i++)
	{
		iVal = to_string(i);
		g = stoi(athletes[i][1]);
		
		if( (athletes[i][0] == "S" && (possibles[g-1] == "S" || possibles[g-1] == "M" || possibles[g-1] == "L")) || 
		(athletes[i][0] == "M" && (possibles[g-1] == "M" || possibles[g-1] == "L") ) ||
		(athletes[i][0] == "L" && (possibles[g-1] == "L") ))	
		{
			counter++;
			possibles[g-1] = 'N';
		}
	}
	
	cout<<counter;
	
	
}
