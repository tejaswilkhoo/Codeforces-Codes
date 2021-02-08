#include <bits/stdc++.h>

using namespace std;  

int main()
{
	string number;
	cin>>number;
	
	string num;	
	int length = number.length();
	int sum = 0;
	
	for(int i=1; i<length; i+=2)
	{
		num =  number[i-1];
		if(number[i] == 'I')
		{
			sum+=(1* stoi(num) );
		}
		
		if(number[i] == 'V')
		{
			sum+=(5* stoi(num) );
		}
		
		if(number[i] == 'X')
		{
			sum+=(10* stoi(num) );
		}
		
		if(number[i] == 'L')
		{
			sum+=(50* stoi(num) );
		}
		
		if(number[i] == 'C')
		{
			sum+=(100* stoi(num) );
		}
		
		if(number[i] == 'D')
		{
			sum+=(500* stoi(num) );
		}
		
		if(number[i] == 'M')
		{
			sum+=(1000* stoi(num) );
		}
	}
	
	for(int i=1; i<length; i+=2)
	{
		num =  number[i-1];
		if(
		(number[i] == 'I' && ((number[i+2] == 'V') || (number[i+2] == 'X') || (number[i+2] == 'L') || (number[i+2] == 'C') || (number[i+2] == 'D') || (number[i+2] == 'M'))) || 
		(number[i] == 'V' && ((number[i+2] == 'X') || (number[i+2] == 'L') || (number[i+2] == 'C') || (number[i+2] == 'D') || (number[i+2] == 'M'))) || 		
		(number[i] == 'X' && ((number[i+2] == 'L') || (number[i+2] == 'C') || (number[i+2] == 'D') || (number[i+2] == 'M'))) || 			
		(number[i] == 'L' && ((number[i+2] == 'C') || (number[i+2] == 'D') || (number[i+2] == 'M'))) || 					
		(number[i] == 'C' && ((number[i+2] == 'D') || (number[i+2] == 'M'))) || 		
		(number[i] == 'D' && ((number[i+2] == 'M'))) 			
		)
		{
			if(number[i] == 'I')
			{
				sum-=2*(1* stoi(num) );
			}
			
			if(number[i] == 'V')
			{
				sum-=2*(5* stoi(num) );
			}
			
			if(number[i] == 'X')
			{
				sum-=2*(10* stoi(num) );
			}
			
			if(number[i] == 'L')
			{
				sum-=2*(50* stoi(num) );
			}
			
			if(number[i] == 'C')
			{
				sum-=2*(100* stoi(num) );
			}
			
			if(number[i] == 'D')
			{
				sum-=2*(500* stoi(num) );
			}
			
			if(number[i] == 'M')
			{
				sum-=2*(1000* stoi(num) );
			}	
		}	
	}
	cout<<sum;
}
