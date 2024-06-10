#include "bits/stdc++.h"
using namespace std;
int a[5][5];
int main(){
	int oi,og;
	for (int i=1;i<6;i++){ //loop to input the matrix
		for (int g=1;g<6;g++){
			cin >> a[i][g];
		}
	}
	for (int i=1;i<6;i++){ 
		for (int g=1;g<6;g++){ 
			int c=a[i][g];
			if (c==1){ //leniar serch for 1.
				oi=i; //store rows and column of 1.
				og=g; //this is  a test for ssh connection

				
			}
		}
	}
	cout << oi << " " << og << endl; //this line was just a check (remove or comment out this line if you want to submit)
	cout << abs(3-oi)+abs(3-og) << endl; //shortest path is |3-r|+|3-c|

}
