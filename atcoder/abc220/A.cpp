// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b, c;
	cin >> a >> b >> c ;
	long long result = -1 ;
	for(long long i = 1;i<=1000 && i<=b;i++){
		if((c*i) >=a && (c*i) <= b){
			cout << c*i << endl ;
			return 0 ;
		}
	}
	cout << result << endl ;
}
