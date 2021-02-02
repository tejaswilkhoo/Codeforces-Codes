#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int counter = 0;
	int a;
	int b;
	cin>>a>>b;

	int sixval;
	float sixround;
	if(a<1 || b>100000000){cout<<endl;}else if (a ==b){cout<<"1";}else{
		
	for(int i=(pow(a,(float(1)/6)))-1; pow(i,6)<b; i++)
	{
//		cout<<"I: "<<i<<endl;
		sixval = pow(i,6);
//		cout<<"Cubedval: "<<cubedval<<endl;
		sixround = round(pow(sixval,(float(1)/6))*100)/100;
//		cout<<"Squareval: "<<sqrtround<<endl;
		
		if(sixval>=a && sixval<=b)
		{
			if(sixround-int(sixround) == 0)
			{
				counter++;
			}
		}
	}
	cout<<counter;
}
}
