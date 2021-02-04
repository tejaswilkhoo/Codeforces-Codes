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
	int start;
	cin>>start;
	
	int year = start+1;
	int determiner = 0;
	string yearstring;
	
	while(determiner == 0 && year<100000)
	{
		yearstring = to_string(year);
		int yearlength = yearstring.length();
		
		int counter = 0;
		
		for(int j = 0; j < yearlength; j++)
		{
			for(int i = j+1; i < yearlength; i++)
			{
				if (yearstring[i] == yearstring[j])
				{
					counter--; //if some digits are the same, counter is negative
				}
			}
		}
		//cout<<counter;
	//	(counter<0) ? determiner = 0 : determiner = 1; //if counter is negative, some digits are the same
		
		if(counter<0)
		{
			determiner = 0;
			year++;
		}
		
		else
		{
			determiner = 1;
		}
	}
	cout<<year;
}
