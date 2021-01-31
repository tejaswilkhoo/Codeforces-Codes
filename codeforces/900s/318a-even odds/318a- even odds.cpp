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
	long long n, k;
	cin>>n>>k;
	
	if (k<=(n+1)/2) //it will be an odd integer
	{
		cout<< ((2*k)-1);
	}
	
	else //it will be an even integer
	{
		cout<<(((k-(n+1)/2))*2);
	}
}
