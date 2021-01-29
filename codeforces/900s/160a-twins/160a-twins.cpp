#include <iostream>
using namespace std;



int sum;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int sum;
	
	for(int i = 0; i<n ; i++){
	  cin>>arr[i];
	  sum+=arr[i];
	}	
	
	cout<<sum;
	/*	
	int arr[] = { 2, 5, 7, 8, 2, 6, 9 };
	int n = 7, sum = 0;
	for(int i = 0; i<n ; i++){
	  sum+=arr[i];
	}
	cout<<"The array sum is "<<sum;
	return 0;
		*/
}
	
