#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t ;
    while(t--){
        ll a,b; cin>> a>> b;
        double x = ceil(abs((double)a-b)/10) ;
        cout<< setprecision(0) << fixed << x << endl ;
    }


    return 0 ;
}