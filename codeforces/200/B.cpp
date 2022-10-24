// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	double arr[n] ;
	for(int i = 0;i<n;i++){
		cin >> arr[i] ;
	}
	double sum = 0;
	for(int i = 0;i<n;i++){
		// cout << arr[i]/100 << endl ;
		sum+= arr[i]/100 ;
	}
	cout << (sum/n)*100 <<endl ;
}
