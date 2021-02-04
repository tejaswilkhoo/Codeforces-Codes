#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <iomanip>

using namespace std;  

int n; //number of test cases or rows of the array
void column_sort(float list[][2])  
{  
	int temp,temp2;  
	for(int out=0; out<n-1; out++)  
	{  
		for(int in=out+1; in<n; in++)  
		{  
			if(list[in][0]<list[out][0])  
			{   
				temp=list[out][0];  
				temp2=list[out][1];  

				list[out][0]=list[in][0];  
				list[out][1]=list[in][1];  

				list[in][0]=temp;  
				list[in][1]=temp2;  
			}                        
		}  
	}  
}     
  
int main()  
{  
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>n;
	float array[n][2];
	
	int i, j;
	for(i=0; i<n; i++) 
	{
		for(j=0;j<2;j++) 
		{
			cin>>array[i][j];
		}
	}

	column_sort(array);  
	
	//cout<<"Sorted Array: "<<endl;
	//for(i=0; i<n; i++) 
	//{
		//for(j=0;j<2;j++) 
		//{
			//cout<<array[i][j]<<" ";
			//if(j==1)
			//{
				//cout<<endl;
			//}
		//}
	//}

//	cout<<endl;
	
	double last_speed = 0.0;
	double greatest_speed = 0.0;
	
	for(int row=0;row<n;row++)
	{
		last_speed = fabs(((array[row+1][1])-(array[row][1]))/((array[row+1][0])-(array[row][0])));
		if (last_speed > greatest_speed)
		{
			greatest_speed = last_speed;
		}
	}
	cout<<fixed<<setprecision(5)<<greatest_speed;
}
