#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <iomanip>

using namespace std;  


void pairsort(double a[], double b[], int n) 
{ 
    pair<double, double> pairt[n];

    for (int i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++)  
    { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    } 
}

  
int main()  
{  
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n;
    double time[n];
    double pos[n];
	
    for(int i = 0; i < n; i++)
    {
        cin >> time[i] >> pos[i];
    }

	pairsort(time, pos, sizeof(time) / sizeof(time[0]));  

	double last_speed = 0.0;
	double greatest_speed = 0.0;
	
	for(int i=1; i<n; i++)
	{
		last_speed = fabs((pos[i]-pos[i-1])/(time[i]-time[i-1]));
		if (last_speed > greatest_speed)
		{
			greatest_speed = last_speed;
		}
	}
	cout<<fixed<<setprecision(10)<<greatest_speed;
}
