#include <bits/stdc++.h>

using namespace std;  

int main()
{

    int n;
    cin>>n;
		
    vector< vector<int> > vect; 
	
	int val;
	for(int i=0; i<n; i++)
	{
		vector<int> temp;
		for(int j=0; j<2; j++)
		{
			cin>>val;
			temp.push_back(val);
		}
		vect.push_back(temp);
		temp.clear();
	}

    sort(vect.begin(), vect.end()); 

    double maxspeed = 0;
    double tempspeed;
    
    for(int i=0; i<n-1; i++)
    {
		tempspeed = fabs( double((vect[i+1][1]-vect[i][1]))/double((vect[i+1][0]-vect[i][0])) );
		if(tempspeed>maxspeed)
		{
			maxspeed = tempspeed;
		}
	}
	cout<<fixed<<setprecision(10)<<maxspeed;
}
