#include <bits/stdc++.h>

using namespace std;  

int main()
{
	int n;
	int m = 3;
	cin>>n;
	int arr[n][m];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		if( (arr[i][0] < 1989) ){
			cout<< "Yes" <<endl;
		}
		else if( (arr[i][0] == 1989) && (arr[i][1] < 2) ){
			cout<< "Yes" <<endl;
		}
		else if( (arr[i][0] == 1989) && (arr[i][1] == 2) && (arr[i][2] <=27) ){
			cout<< "Yes" <<endl;
		}
		else{
			cout<< "No" <<endl;
		}
	}
}
