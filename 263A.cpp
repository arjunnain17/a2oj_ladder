#include "bits/stdc++.h"
using namespace std;
int a[5][5];
int main(){
	int oi,og;
	for (int i=1;i<6;i++){
		for (int g=1;g<6;g++){
			cin >> a[i][g];
		}
	}
	for (int i=1;i<6;i++){
		for (int g=1;g<6;g++){
			int c=a[i][g];
			if (c==1){
				oi=i;
				og=g;

				
			}
		}
	}
	cout << oi << " " << og << endl;
	cout << abs(3-oi)+abs(3-og) << endl;

}