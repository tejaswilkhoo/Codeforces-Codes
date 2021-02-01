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
	string firstline;
	string secondline;
	string asterisk;
	
	asterisk = "*";
	
	cin>>firstline;
	cin>>secondline;
	
	int firstlength = firstline.length();
	int secondlength = secondline.length();
	
	sort(firstline.begin(), firstline.end());
    sort(secondline.begin(), secondline.end());
    
    cout<<"Sorted First Line: "<<firstline<<endl;
    cout<<"Sorted Second Line: "<<secondline<<endl;
 
	//find number of astresiskss
	int aCount = 0;
	for (int i = 0; i < secondlength; i++) 
	{
		if (asterisk == secondline.substr(i, 1)) 
		{
			aCount++;
		}
	}
	
	cout<<"# of asterisks: "<<aCount<<endl;
	
 
    // Compare sorted strings
    int trackVal = 0;
    if(firstlength!=secondlength)
    {
		cout<<"N";
	}
	
	else
	{
		for (int i = 0; i < firstlength; i++)
		{
			if (firstline[i] != secondline[i] && firstline[i] != asterisk[0])
			{	
				trackVal--;
			}
		}
		cout<<"Trackval: "<<trackVal<<endl;
		trackVal += aCount;
		cout<<"Updated Trackval: "<<trackVal<<endl;
		trackVal == 0 ? cout<<"A" : cout<<"N";
	}

}
	
