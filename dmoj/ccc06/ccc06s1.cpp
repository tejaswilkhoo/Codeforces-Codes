#include <bits/stdc++.h>

using namespace std;  

int main()
{
	string mom;
	string dad;
	string kid;
	
	cin>>mom;
	cin>>dad;
	
	int n;
	cin>>n;
	
	int results[n];
	if(n<=0 || mom.length()>10 || dad.length()>10){cout<<endl;}else{
	for(int i=0; i<n; i++){
		
		cin>>kid;
		if(
		( 
		( (mom.substr(0,2) == "AA" || dad.substr(0,2) == "AA" ) && kid.substr(0,1) != "A" ) ||
		( (mom.substr(2,2) == "BB" || dad.substr(2,2) == "BB" ) && kid.substr(1,1) != "B" ) ||		
		( (mom.substr(4,2) == "CC" || dad.substr(4,2) == "CC" ) && kid.substr(2,1) != "C" ) ||
		( (mom.substr(6,2) == "DD" || dad.substr(6,2) == "DD" ) && kid.substr(3,1) != "D" ) ||
		( (mom.substr(8,2) == "EE" || dad.substr(8,2) == "EE" ) && kid.substr(4,1) != "E" )		
		) ||
		
		(
		( (mom.substr(0,2) == "aa" && dad.substr(0,2) == "aa" ) && kid.substr(0,1) != "a" ) ||
		( (mom.substr(2,2) == "bb" && dad.substr(2,2) == "bb" ) && kid.substr(1,1) != "b" ) ||		
		( (mom.substr(4,2) == "cc" && dad.substr(4,2) == "cc" ) && kid.substr(2,1) != "c" ) ||
		( (mom.substr(6,2) == "dd" && dad.substr(6,2) == "dd" ) && kid.substr(3,1) != "d" ) ||
		( (mom.substr(8,2) == "ee" && dad.substr(8,2) == "ee" ) && kid.substr(4,1) != "e" )		
		)
		){
			results[i] = 0;
		}
		else{
			results[i] = 1;
		}
	}
	
	for(int i=0; i<n; i++){
		if(results[i] == 0)	{
			cout<<"Not their baby!"<<endl;
		}
		else{
			cout<<"Possible baby.	"<<endl;
		}
	}
}
}
