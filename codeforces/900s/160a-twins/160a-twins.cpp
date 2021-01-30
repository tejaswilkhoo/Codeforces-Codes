#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	int sum = 0;
	float neededsum = 0;
	int finalsum = 0;
	int counter = 0;

	for(int i = 0; i<n; i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}	
	
	neededsum = float(sum)/2;

//	cout<<"Needed Sum: "<<neededsum<<endl<<"------------------------\n";
	
	sort(arr,arr+n);

//	cout<<"Sorted Array: ";
//	for(int i=0;i<n;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
	
//	cout<<"\n------------------------\n";
	
	for(int i=1; finalsum <= neededsum; i++)
	{
		counter++;
		finalsum += arr[n-(i)];	
	}

//	cout<<"Minimum # of coins needed: "<< counter;
	
	cout<<counter;
	
	return 0;
}
 
