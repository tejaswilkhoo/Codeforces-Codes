#include <bits/stdc++.h>

using namespace std;  

int main()
{


	string lines;
	cin>>lines;
	
	int numbers = 10;
	for(int i=0; i<numbers; i++){
		if(lines[i] == '-'){
				numbers++;
			}
			
			else{
				cout<<lines[i];
			}
	}




	//int n;
	//cin>>n;
	
	//string lines[n];
	//string organLines[n];

	//for(int i=0; i<n; i++){
		//cin>>lines[i];
	//}
	
	//cout<<endl;
	
	//for(int i=0; i<n; i++){
			//int numbers = 10;
		//for(int j=0; j<numbers; j++){
			//if(lines[i][j] == '-'){
				//numbers++;
			//}
			
			//else{
				////if(
				 ////lines[i][j] == ('A') || 
				 ////lines[i][j] == ('a') ||
				 ////lines[i][j] == ('B') ||
				 ////lines[i][j] == ('b') ||
				 ////lines[i][j] == ('C') ||
				 ////lines[i][j] == ('c')
				 ////){
					////organLines[i][j] = '2';
				////}
				
				////else if(
				 ////lines[i][j] == ('D') || 
				 ////lines[i][j] == ('d') ||
				 ////lines[i][j] == ('E') ||
				 ////lines[i][j] == ('e') ||
				 ////lines[i][j] == ('F') ||
				 ////lines[i][j] == ('f')
				 ////){
					////organLines[i][j] = '3';
				////}
				
				////else if(
				 ////lines[i][j] == ('G') || 
				 ////lines[i][j] == ('g') ||
				 ////lines[i][j] == ('H') ||
				 ////lines[i][j] == ('h') ||
				 ////lines[i][j] == ('I') ||
				 ////lines[i][j] == ('i')
				 ////){
					////organLines[i][j] = '4';
				////}
				
				////else if(
				 ////lines[i][j] == ('J') || 
				 ////lines[i][j] == ('j') ||
				 ////lines[i][j] == ('K') ||
				 ////lines[i][j] == ('k') ||
				 ////lines[i][j] == ('L') ||
				 ////lines[i][j] == ('l')
				 ////){
					////organLines[i][j] = '5';
				////}
				
				////else if(
				 ////lines[i][j] == ('M') || 
				 ////lines[i][j] == ('m') ||
				 ////lines[i][j] == ('N') ||
				 ////lines[i][j] == ('n') ||
				 ////lines[i][j] == ('O') ||
				 ////lines[i][j] == ('o')
				 ////){
					////organLines[i][j] = '6';
				////}
				
				////else if(
				 ////lines[i][j] == ('P') || 
				 ////lines[i][j] == ('p') ||
				 ////lines[i][j] == ('Q') ||
				 ////lines[i][j] == ('q') ||
				 ////lines[i][j] == ('R') ||
				 ////lines[i][j] == ('r') ||
				 ////lines[i][j] == ('S') ||
				 ////lines[i][j] == ('s')
				 ////){
					////organLines[i][j] = '7';
				////}	
				
				////else if(
				 ////lines[i][j] == ('T') || 
				 ////lines[i][j] == ('t') ||
				 ////lines[i][j] == ('U') ||
				 ////lines[i][j] == ('u') ||
				 ////lines[i][j] == ('V') ||
				 ////lines[i][j] == ('v')
				 ////){
					////organLines[i][j] = '8';
				////}		
				
				////else if(
				 ////lines[i][j] == ('W') || 
				 ////lines[i][j] == ('w') ||
				 ////lines[i][j] == ('X') ||
				 ////lines[i][j] == ('x') ||
				 ////lines[i][j] == ('Y') ||
				 ////lines[i][j] == ('y') ||
				 ////lines[i][j] == ('Z') ||
				 ////lines[i][j] == ('z')
				 ////){
					////organLines[i][j] = '9';
				////}				
				
				////else{
					//organLines[i][j] = lines[i][j];
	////			}
			//}
			
		//}	
	//}
	
	//for(int i=0; i<n; i++){
		//for(int j=0; j<10; j++){
			//cout<<organLines[i][j];
		//}
		//cout<<endl;
	//}
}
