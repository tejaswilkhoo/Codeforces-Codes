#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int sum;
	int neededsum;
	
	for(int i = 0; i<n ; i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}	
	
	neededsum = ceil(sum/2);
	cout<<neededsum<<endl;

	cout<<"------------------------\n";

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

return 0;
}
	
