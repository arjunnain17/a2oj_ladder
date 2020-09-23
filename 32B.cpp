#include "bits/stdc++.h"
using namespace std;
int main(){
	string n,n2;
	cin >> n;
	for (int i=0;i<n.length();i++){
		if (n[i]=='.'){
			n2+='0';
		}
		if (n[i]=='-' && n[i+1]=='.'){
			n2+='1';
			i++;
		}
		if (n[i]=='-' && n[i+1]=='-'){
			n2+='2';
			i++;
		}
	}
	cout << n2 << endl;

}