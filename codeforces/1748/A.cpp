#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t ;
    cin >> t;
    while(t--){
        ll x;cin >> x ;

        cout << llround(ceil(double((double)x/2))) << endl ;
    }

    return 0 ;
}