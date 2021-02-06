#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	sort(arr, arr+n);
	
	//cout<<endl;
	//for(int i=0; i<n; i++)
	//{
		//cout<<arr[i]<<" ";
	//}	
	
	int sortedarr[n/2][2];
	
	int g = (ceil(double(n)/2));
	
	for(int i=0; i<g; i++)
	{
		sortedarr[i][0] = arr[   g   -i-1];
		sortedarr[i][1] = arr[   g   +i];
	}
	
	
//	cout<<endl;
	for (int i=0; i<(n/2); i++)
	{
		cout<<sortedarr[i][0]<<" "<<sortedarr[i][1]<<" ";
	}
	if(n%2 == 1)
	{
		cout<<arr[0];
	}
	
}
