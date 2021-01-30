#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
//	int n;
//	cin>>n;
	int disp[2][3];
	
//	int time;
//	int pos;

   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
	
//	sort(arr,arr+n);

//	cout<<"Sorted Array: ";
//	for(int i=0;i<n;i++)
//	{
//		cout<<arr[i]<<" ";
//	}
	
}
