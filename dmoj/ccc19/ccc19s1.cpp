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
	string str, hVals, vVals;
	
	hVals = 'H';
	vVals = 'V';
	
	cin>>str;
	
    int hLength = hVals.length();
    int vLength = vVals.length();
    int large = str.length();
    
    int hCount = 0;
    int vCount = 0;

    for (int i = 0; i < large; i++) 
    {
        if (hVals == str.substr(i, hLength)) 
        {
            hCount++;
        }
    }

    for (int i = 0; i < large; i++) 
    {
        if (vVals == str.substr(i, vLength)) 
        {
            vCount++;
        }
    }
    
   
//    cout << "# of H's: " << hCount << endl;
    
//    cout << "# of V's: " << vCount << endl;

    
    if(hCount%2 == 0 && vCount %2 == 0)
    {
		cout << "1 " << "2" << endl << "3 " << "4";
	}
	
    if(hCount%2 == 1 && vCount %2 == 1) 
    {
		cout << "4 " << "3" << endl << "2 " << "1";
	}
	
    if(hCount%2 == 1 && vCount %2 == 0) 
    {
		cout << "3 " << "4" << endl << "1 " << "2";
	}
	
    if(hCount%2 == 0 && vCount %2 == 1) 
    {
		cout << "2 " << "1" << endl << "4 " << "3";
	}
}

