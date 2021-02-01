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

int countPairs(string s1, int n1, string s2, int n2) 
{ 
  
    // To store the frequencies of characters 
    // of string s1 and s2 
    int freq1[26] = { 0 }; 
    int freq2[26] = { 0 }; 
  
    // To store the count of valid pairs 
    int i, count = 0; 
  
    // Update the frequencies of 
    // the characters of string s1 
    for (i = 0; i < n1; i++) 
        freq1[s1[i] - 'a']++; 
  
    // Update the frequencies of 
    // the characters of string s2 
    for (i = 0; i < n2; i++) 
        freq2[s2[i] - 'a']++; 
  
    // Find the count of valid pairs 
    for (i = 0; i < 26; i++) 
        count += (min(freq1[i], freq2[i])); 
  
    return count; 
} 
  
// Driver code 
int main() 
{ 
    string s1, s2;
    string asterisk;
	asterisk = "*";
	
    cin>>s1;
    cin>>s2;
    
    int tempval = 0;
     
    int n1 = s1.length(), n2 = s2.length(); 
    tempval = countPairs(s1, n1, s2, n2);
    
    	//find number of astresiskss
	int aCount = 0;
	for (int i = 0; i < n2; i++) 
	{
		if (asterisk == s2.substr(i, 1)) 
		{
			aCount++;
		}
	} 
	
	if((tempval + aCount) == n1)
	{
		cout<<"A";
	}	
	else
	{
		cout<<"N";
	}
} 
	
