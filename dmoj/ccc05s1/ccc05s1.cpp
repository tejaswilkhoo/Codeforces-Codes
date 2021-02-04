#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int n;
	cin>>n;
	
	string lines[n];
	string organLines[n];

	for(int i=0; i<n; i++)
	{
		cin>>lines[i];
	}
	
	for(int i=0; i<n; i++)
	{
			
		for(int j=0, numbers = 0; j<(numbers+10); j++)
		{
			
			if(lines[i][j] == '-')
			{
				numbers++;
			}
			
			else
			{
				if(
				 lines[i][j] == ('A') || 
				 lines[i][j] == ('a') ||
				 lines[i][j] == ('B') ||
				 lines[i][j] == ('b') ||
				 lines[i][j] == ('C') ||
				 lines[i][j] == ('c')
				 ){
					organLines[i][j-numbers] = '2';
				}
				
				else if(
				 lines[i][j] == ('D') || 
				 lines[i][j] == ('d') ||
				 lines[i][j] == ('E') ||
				 lines[i][j] == ('e') ||
				 lines[i][j] == ('F') ||
				 lines[i][j] == ('f')
				 ){
					organLines[i][j-numbers] = '3';
				}
				
				else if(
				 lines[i][j] == ('G') || 
				 lines[i][j] == ('g') ||
				 lines[i][j] == ('H') ||
				 lines[i][j] == ('h') ||
				 lines[i][j] == ('I') ||
				 lines[i][j] == ('i')
				 ){
					organLines[i][j-numbers] = '4';
				}
				
				else if(
				 lines[i][j] == ('J') || 
				 lines[i][j] == ('j') ||
				 lines[i][j] == ('K') ||
				 lines[i][j] == ('k') ||
				 lines[i][j] == ('L') ||
				 lines[i][j] == ('l')
				 ){
					organLines[i][j-numbers] = '5';
				}
				
				else if(
				 lines[i][j] == ('M') || 
				 lines[i][j] == ('m') ||
				 lines[i][j] == ('N') ||
				 lines[i][j] == ('n') ||
				 lines[i][j] == ('O') ||
				 lines[i][j] == ('o')
				 ){
					organLines[i][j-numbers] = '6';
				}
				
				else if(
				 lines[i][j] == ('P') || 
				 lines[i][j] == ('p') ||
				 lines[i][j] == ('Q') ||
				 lines[i][j] == ('q') ||
				 lines[i][j] == ('R') ||
				 lines[i][j] == ('r') ||
				 lines[i][j] == ('S') ||
				 lines[i][j] == ('s')
				 ){
					organLines[i][j-numbers] = '7';
				}	
				
				else if(
				 lines[i][j] == ('T') || 
				 lines[i][j] == ('t') ||
				 lines[i][j] == ('U') ||
				 lines[i][j] == ('u') ||
				 lines[i][j] == ('V') ||
				 lines[i][j] == ('v')
				 ){
					organLines[i][j-numbers] = '8';
				}		
				
				else if(
				 lines[i][j] == ('W') || 
				 lines[i][j] == ('w') ||
				 lines[i][j] == ('X') ||
				 lines[i][j] == ('x') ||
				 lines[i][j] == ('Y') ||
				 lines[i][j] == ('y') ||
				 lines[i][j] == ('Z') ||
				 lines[i][j] == ('z')
				 ){
					organLines[i][j-numbers] = '9';
				}				
				
				else{
					organLines[i][j-numbers] = lines[i][j];
					
				}
			}
			
		}	
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<organLines[i][0]<<organLines[i][1]<<organLines[i][2]<<"-"
			<<organLines[i][3]<<organLines[i][4]<<organLines[i][5]<<"-"
			<<organLines[i][6]<<organLines[i][7]<<organLines[i][8]
			<<organLines[i][9]<<endl;
	}
}
