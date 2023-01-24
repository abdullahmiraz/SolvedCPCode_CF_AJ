#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c; cin >>a >> b >> c;
    int mx = max({a,b,c});
    int mn = min({a,b,c});
    cout << mx -mn << endl;

    return 0 ;
}