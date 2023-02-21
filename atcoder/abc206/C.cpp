#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int,int> mp;
    int n; cin >> n;
    for(int i = 0;i<n;i++){
        int x; cin >> x;
        mp[x]++;
    }

    ll ans = 0;
    for(auto it: mp){
        ans += (ll)(it.second)*(n-it.second);
        n-=it.second;
    }

    cout << ans << endl ;

    return 0 ;
}