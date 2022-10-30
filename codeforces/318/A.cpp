#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
// miraz 88
int main(){
	ll n, k ;
	cin >> n >> k ;

	if(k<=(n+1)/2){
		cout << 2*k-1 << endl ;
	}else{
		k = k-(n+1)/2 ;
		cout << 2*k << endl ;
	}
}