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
	int g;
	cin>>g;
	
	int n = g-3;
	
	int numerator = 1;
	for(int i=0; i<3; i++)
	{
		numerator*=(n+i);
	}
	

	cout<<(numerator/6);
}
