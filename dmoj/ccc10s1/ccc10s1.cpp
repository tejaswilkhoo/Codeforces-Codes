#include <bits/stdc++.h>

using namespace std;  

bool comparison(const pair<int,int> &a,const pair<int,int> &b)
{ 
    return a.second<b.second; 
} 


int main()
{
	int n;
	cin>>n;
	
	string a;
	int r;
	int s;
	int d;
	
	int arr[n];
	string name[n];

	if(n == 1)
	{	
		cin>>a;
		cin>>r;
		cin>>s;
		cin>>d;
		
		cout<<a;
	}
	
	else if(n == 0)
	{
		cout<<endl;
	}
	
	else 
	{
	
		for (int i=0; i<n; i++)
		{
			cin>>a;
			cin>>r;
			cin>>s;
			cin>>d;
			
			name[i] = a;
			arr[i] = (2*r) + (3*s) + d;
		}
		//cout<<endl;

		
		//for(int i=0; i<n; i++)
		//{
			//cout<<name[i]<<" "<< arr[i]<<endl;
		//}
		
		//cout<<endl;
		
		int max = 1;
		int secondmax = 0;
		if(arr[max]>arr[secondmax])
		{
			max = 1;
			secondmax = 0;
		}
		else if (arr[max]<arr[secondmax])
		{
			max = 0;
			secondmax = 1;
		}
		else if (arr[max] == arr[secondmax])
		{
			if(name[max]<name[secondmax])
			{
				max = 1;
				secondmax = 0;
			}
			else
			{
				max = 0;
				secondmax = 1;
			}
		}
		
		for(int i=2; i<n; i++)
		{
			if(arr[i]>arr[max])
			{
				secondmax = max;
				max = i;

			}
			else if(arr[i]==arr[max])
			{
				if(name[i]<name[max])
				{
					secondmax = max;				
					max = i;

				}
				else
				{
					secondmax = i;
				}
			}
			else if(arr[i]<arr[max] && arr[i]>arr[secondmax])
			{
				secondmax = i;
			}
			else if(arr[i]==arr[secondmax])
			{
				if(name[i]<name[secondmax])
				{
					secondmax = i;
				}
			}
		}
		

		cout<<name[max]<<endl<<name[secondmax];


		
		
	}
}
