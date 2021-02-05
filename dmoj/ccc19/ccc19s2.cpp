#include <bits/stdc++.h>

using namespace std;  

bool primeCheck(int number) //if it is prime, return true
{
	if( number<2 || (number%2 == 0 && number != 2))
	{
		return false;
	}
	else
	{
		for (int i=3; i<=floor(sqrt(number)); i+=2) 
		{
			if (number%i == 0) 
			{
				return false;
				break;
			}
		}
		return true;
	}
}

int main()
{
	int t;
	cin>>t;
	
	int number;
	int results[t][2];
	
	for(int j=0; j<t; j++)
	{
		cin>>number;
		
		for(int k=3; k<(number); k+=2)
		{
			if(primeCheck(k) == true)
			{
				int m = ((2*number)-k);
				if(primeCheck(m) == true)
				{
					results[j][0] = k;
					results[j][1] = m;
					k = number;
				}
			}
		}	
	}
	
	for(int p=0; p<t; p++)
	{
		cout<<results[p][0]<<" "<<results[p][1]<<endl;
	}
	
	//long number;
	//cin>>number;
	//if (primeCheck(number)){cout<<"It is prime";}
	//else {cout<<"It is not prime";}
}
