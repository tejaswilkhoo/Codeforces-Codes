#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string H = "H";
	string Q = "Q";
	string Nine = "9";

	string p;
	cin>>p;
	
	size_t foundH = p.find(H);
	size_t foundQ = p.find(Q);
	size_t found9 = p.find(Nine);

	foundH != string::npos ? cout<< "YES" :	 
	foundQ != string::npos ? cout<< "YES" :	 	
	found9 != string::npos ? cout<< "YES" :	cout<< "NO"; 
	
	return 0;
}
