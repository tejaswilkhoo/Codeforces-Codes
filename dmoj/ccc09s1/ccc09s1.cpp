#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int counter = 0;
	int a;
	int b;
	cin>>a>>b;
	
	for(double i=a; i<=b; i++)
	{
		float sixrt = pow(i,(float(1)/6));
		float sixrtround = round(sixrt*100)/100;
		
		if(sixrtround-int(sixrtround) == 0)
		{
			counter++;
		}
	}
	cout<<counter;
}
