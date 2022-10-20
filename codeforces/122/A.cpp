#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll>a = {4,7,44,47,74,77,444,447,474,477,744,747,774,777} ;
    int n ;cin >> n;
    // check lucky or not ;
    for(int i = 0;i<a.size();i++){ 
        float test = n%a[i] ;
        if(n==a[i] || test==0 ){
            cout << "YES" ;
            return 0 ;
        }
    }
    cout << "NO" ;

    return 0 ;
}