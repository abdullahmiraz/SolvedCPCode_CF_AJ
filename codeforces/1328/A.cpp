// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int main() {
	int t ; cin >> t ;
	while(t--){
		ll a, b; cin >> a >> b ;
		ll test = floor(a/b) ;
		if(a%b!=0){
			cout << b*((test)+1) -a << "\n" ;
		}else{
			cout << a%b << "\n" ;
		}
		
	}
}
