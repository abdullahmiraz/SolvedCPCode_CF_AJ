// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, t ;
	cin >> a >> b >> t ;
	int result = 0 ;
	int multi = a ;
	while(multi<=t){
		result = result + b ;
		multi+=a ;
	}
	cout << result << endl ;
}
