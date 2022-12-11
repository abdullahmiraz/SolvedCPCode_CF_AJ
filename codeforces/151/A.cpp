#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k , l, c, d, p, nl, np ;
    cin >> n >> k >> l >> c >> d >> p >> nl >>np ;

    ll drink, lime, salt; 
    int cnt=0;
    drink = (k*l)/nl ;
    lime = (c*d);
    salt = p/np;
    
    int mn = min({drink, lime, salt}) / n ;
    cout << mn << endl ;

    return 0 ;
}